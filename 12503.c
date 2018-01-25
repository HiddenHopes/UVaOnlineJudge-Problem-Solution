#include<stdio.h>
#include<math.h>

int main()
{
    int t,i,n,v,k;
    char d[105],s[8],r[5];
    freopen("in.txt","r",stdin);
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        v=0;
        for(i=1;i<=n;i++){
            scanf("%s",s);
            if(s[0]=='L'){v  = v - 1; d[i]='L';}
            else if(s[0]=='R'){v  = v + 1;d[i]='R';}
            else if(s[0]=='S'){
                scanf("%s",r);
                scanf("%d",&k);
                if(d[k]=='L'){v  = v - 1; d[i]='L';}
                else if(d[k]=='R'){v  = v + 1;d[i]='R';}

            }

        }
        printf("%d\n",v);

    }
    return 0;
}
