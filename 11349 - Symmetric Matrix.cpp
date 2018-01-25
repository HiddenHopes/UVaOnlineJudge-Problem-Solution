#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t, i, j, k, n, a[103][103], f;
    char c;
    freopen("in.txt","r",stdin);

    scanf("%lld",&t);
    for(k=1;k<=t;k++){
         scanf("%c%c%c%c%lld",&c,&c,&c,&c,&n);
         f=1;
         for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                scanf("%lld",&a[i][j]);
                if(a[i][j]<0)f=0;
            }
         }

        if(f) for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                if(a[i][j]==a[n+1-i][n+1-j])continue;
                else {f=0;break;}
            }
            if(f==0)break;
         }
         if(f==0)printf("Test #%lld: Non-symmetric.\n",k);
         else printf("Test #%lld: Symmetric.\n",k);
    }
    return 0;
}
