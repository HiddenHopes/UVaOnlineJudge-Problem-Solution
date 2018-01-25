#include<bits/stdc++.h>
using namespace std;

int main(){
    int mn,mx,i,k,t,n,a,b,f;
    char s[1000009];
    t=1;
    freopen("in.txt","r",stdin);
    while(gets(s)){
        printf("Case %d:\n",t);
        t++;
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            scanf("%d %d\n",&a,&b);
            mn=min(a,b);
            mx=max(a,b);
            f=0;
            for(k=mn;k<=mx;k++){
                if(s[mn]==s[k])continue;
                else {f=1;break;}
            }
            if(f==0)printf("Yes\n");
            else printf("No\n");
        }
    }
    return 0;
}
