#include<stdio.h>
#include<string.h>
long long int a[99999][999];
long long int C(long long int n, long long int r)
{
    if(n-r<r)r=n-r;
    if (n<99999 && r<999&& a[n][r]!= -1) return a[n][r];
    else
    {
        if (r==0 || r==n) return 1;
        else if (r==1) return n;
        else if(n<99999 && r<999)return a[n][r] = C(n-1, r-1) + C(n-1, r);
        else return C(n-1, r-1) + C(n-1, r);
    }
}

int main()
{
    long long int n,r,ans;
    memset(a,-1,sizeof(a));
    while(scanf("%lld%lld",&n,&r) == 2)
    {
        if(n==0&&r==0) break;
        ans = C(n,r);
        printf("%lld\n",ans);
    }
    return 0;
}
