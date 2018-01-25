#include<bits/stdc++.h>
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


int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
   sieve(10000000);
   long long int n,k,i,x,y;

   while(cin>>n&&n!=0){

        k = 1;
        bool flag = false;
        while(primes[k]<n){
            x= primes[k];
            y = n - primes[k];
            if(isPrime(y)) {flag = true; break;}
            k++;
        }
        if(flag) cout<<n<<" = "<<x<<" + "<<y<<endl;
        else cout<<"Goldbach's conjecture is wrong.\n";
   }
   return 0;
}
