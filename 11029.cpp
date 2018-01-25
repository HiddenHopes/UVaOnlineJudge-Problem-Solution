
#include<bits/stdc++.h>
using namespace std;
// this function find modular exponentiation of base. like pow(n,p)
// here, mod by 1000000000
long long int ipow(long long int base, long long int exp)
{
    long long int result = 1;
    while (exp)
    {
        if (exp & 1)
            result = (result%1000000000) * (base%1000000000);
        exp >>= 1;
        base = (base%1000000000)*(base%1000000000);
    }
    return result%1000;
}
int main(){
    freopen("in.txt","r",stdin); freopen("out.txt","w",stdout);
   long long int t, n, p, ans1,ans2;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld %lld",&n, &p);
        ans2 = ipow(n,p);
        double u = p*log10(n);
        u = fmod(u,1);
        ans1 = pow(10, u)*100;
        printf("%lld...%03lld\n",ans1,ans2);

    }
    return 0;
}
