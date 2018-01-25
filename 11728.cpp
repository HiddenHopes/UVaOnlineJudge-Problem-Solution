#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>

#define MAX 46656
#define LMT 216
#define LEN 4830
#define RNG 100032

unsigned base[MAX / 64], segment[RNG / 64], primes[LEN];
int s[10000];
#define sq(x) ((x)*(x))
#define mset(x,v) memset(x,v,sizeof(x))
#define chkC(x,n) (x[n>>6]&(1<<((n>>1)&31)))
#define setC(x,n) (x[n>>6]|=(1<<((n>>1)&31)))

void sieve()
{
    unsigned i, j, k;
    for (i = 3; i<LMT; i += 2)
        if (!chkC(base, i))
            for (j = i*i, k = i << 1; j<MAX; j += k)
                setC(base, j);
    primes[0] = 2;
    for (i = 3, j = 1; i<MAX; i += 2)
        if (!chkC(base, i))
            primes[j++] = i;
}

vector <pii> factors;
void primeFactors(int num)
{
    int expo = 0;
    for (int i = 0; primes[i] <= sqrt(num); i++)
    {
        expo = 0;
        int prime = primes[i];
        while (num % prime == 0){
            expo++;
            num = num / prime;
        }
        if (expo>0)
            factors.push_back(make_pair(prime, expo));
    }

    if ( num >= 2)
        factors.push_back(make_pair(num, 1));

}

vector <int> divisors;
void setDivisors(int n, int i) {
    int j, x, k;
    for (j = i; j<factors.size(); j++) {
        x = factors[j].first * n;
        for (k = 0; k<factors[j].second; k++) {
            divisors.push_back(x);
            setDivisors(x, j + 1);
            x *= factors[j].first;
        }
    }
}

int main() {

    sieve();
    int n, x, sum, i;
    memset(s,-1,sizeof (s));
    for (int i = 1; i <= 1000; i++) {
        primeFactors(i);
        setDivisors(1, 0);
        divisors.push_back(1);
        sum=0;
        for (int j = 0; j < divisors.size(); j++) {
            sum+=divisors[j];
        }
        s[sum]=i;
        divisors.clear();
        factors.clear();
    }
    int k=1;
    while(cin>>n && n){
        cout<<"Case "<<k<<": "<<s[n]<<endl;
        k++;
    }

}
