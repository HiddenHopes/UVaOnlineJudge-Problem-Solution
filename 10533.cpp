#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef map<int, int> mii;

bool dp[1000002];
ll _sieve_size;
bitset<10000010> bs;
vi primes;

void sieve(ll upperbound) {
  _sieve_size = upperbound + 1;
  bs.set();
  bs[0] = bs[1] = 0;
  for (ll i = 2; i <= _sieve_size; i++)
    if (bs[i]){
        for (ll j = i * i; j <= _sieve_size; j += i)
            bs[j] = 0;
    primes.push_back((int)i);
    }
}

bool isPrime(ll N) {
  if (N <= _sieve_size) return bs[N];
  for (int i = 0; i < (int)primes.size(); i++)
    if (N % primes[i] == 0) return false;
  return true;
}
int cnt[1000002];
void digitPrime(){
    int sum,x;
    cnt[0] = 0;
    for(int i=1; i<=1000000; i++){
       if(isPrime(i)){
            sum = 0;
            x = i;
            while(x>0){
                sum = sum + x%10;
                x/=10;
            }
            if(isPrime(sum)) {dp[i] = true; cnt[i] = cnt[i-1]+1;}
            else cnt[i] = cnt[i-1];
        }
        else cnt[i] = cnt[i-1];
    }
}

int main()
{
    sieve(1000000);
    memset(dp, false, sizeof dp);
    digitPrime();
    int t, n, x, y, ans;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&x, &y);
        ans = cnt[y] - cnt[x];
        if(dp[x]==true) ans++;
        printf("%d\n",ans);
    }
    return 0;
}
