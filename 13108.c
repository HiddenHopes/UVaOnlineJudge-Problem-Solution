#include<stdio.h>
#include<math.h>

int main()
{
    long long int ans,n,t;
    //freopen("in.txt","r",stdin);
    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld",&n);

        ans = 1+n*(n-1)/2+n*(n-1)*(n-2)*(n-3)/24;

        printf("%lld\n",ans);
    }
    return 0;
}
