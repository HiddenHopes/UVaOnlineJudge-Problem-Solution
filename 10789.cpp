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
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
   sieve(10000000);
   long long int a[300];
   long long int n,k,i;
   string s;
   while(cin>>n){
        for(k=1; k<=n; k++){
            cin>>s;
            memset(a,0,sizeof a);
            for(i=0; i<s.length(); i++){
                a[s[i]] +=1;
            }
            cout<<"Case "<<k<<": ";
            bool flag = true;
            for(i='0'; i<='z'; i++){
                if(isPrime(a[i])) {flag = false; cout<<char(i);}
            }
            if(flag) cout<<"empty";
            cout<<endl;
        }
   }
   return 0;
}
