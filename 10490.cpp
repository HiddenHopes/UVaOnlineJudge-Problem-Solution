#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef map<int, int> mii;

ll _sieve_size;
bitset<10000010> bs;
vi primes;

void sieve(ll upperbound) {
  _sieve_size = upperbound + 1;
  bs.set();
  bs[0] = bs[1] = 0;
  for (ll i = 2; i <= _sieve_size; i++) if (bs[i]) {
    for (ll j = i * i; j <= _sieve_size; j += i) bs[j] = 0;
    primes.push_back((int)i);
} }

bool isPrime(ll N) {
  if (N <= _sieve_size) return bs[N];
  for (int i = 0; i < (int)primes.size(); i++)
    if (N % primes[i] == 0) return false;
  return true;
}


inline void perfect(long long int k){
    long long int x,y;
    x = pow(2,k-1);
    y = (pow(2,k)-1);
    if(isPrime(y))cout<<"Perfect: "<<x*y<<"!"<<endl;
    else if(isPrime(k)){
        cout<<"Given number is prime. But, NO perfect number is available."<<endl;
    }
    else cout<<"Given number is NOT prime! NO perfect number is available."<<endl;
}
int main()
{
    sieve(10000000);
    int n;
    while(cin>>n && n){

        perfect(n);
    }
    return 0;
}
