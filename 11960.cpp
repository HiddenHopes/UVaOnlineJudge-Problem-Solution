#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;

#define pii pair<int, int>

#define MAX 46656
#define LMT 216
#define LEN 4830
#define RNG 100032

unsigned base[MAX / 64], segment[RNG / 64], primes[LEN];
int d[1000002];
int m[1000002];
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
    memset(d,0,sizeof d);
    memset(m,0,sizeof m);

    int n, x, mx=0, p=0, i;
    for (int i = 1; i <=1000000; i++) {
        primeFactors(i);
        setDivisors(1, 0);
        divisors.push_back(1);
        d[i] = divisors.size();
        if(mx<=d[i]) {mx = d[i]; p = i;}
        m[i] = p;
        divisors.clear();
        factors.clear();
    }
    cin>>n;
    for(int j=1; j<=n; j++){
        cin>>x;
        cout<<m[x]<<endl;
    }
}
