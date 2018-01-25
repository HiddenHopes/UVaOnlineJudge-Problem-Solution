#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef map<int, int> mii;

ll _sieve_size;
bitset<20000010> bs;
vi primes;
int twin[100002][2];
void sieve(ll upperbound) {
  _sieve_size = upperbound + 1;
  bs.set();
  bs[0] = bs[1] = 0;
  for (ll i = 2; i <= _sieve_size; i++) if (bs[i]) {
    for (ll j = i * i; j <= _sieve_size; j += i) bs[j] = 0;
    primes.push_back((int)i);
} }

int main()
{
    sieve(20000000);
    int r=0, k=1;

    while(k<=100000){
        if(primes[r]+2==primes[r+1]) {
            twin[k][0] = primes[r];
            twin[k][1] = primes[r+1];
            k++;
        }
        r++;
    }
    int n;
    while(cin>>n){
        cout<<"("<<twin[n][0]<<", "<<twin[n][1]<<")"<<endl;
    }
    return 0;
}
