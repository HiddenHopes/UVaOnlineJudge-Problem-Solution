#include<stdio.h>
#include<math.h>

int main()
{
    int k,t,i,m,p[13];
    char d[13][1000];
    freopen("in.txt","r",stdin);
    scanf("%d",&t);
    for(k=1;k<=t;k++){
        printf("Case #%d:\n",k);
        m=0;
        for(i=1;i<=10;i++){
            scanf("%s %d",d[i],&p[i]);
            if(p[i]>m) m=p[i];
        }
        for(i=1;i<=10;i++){
            if(p[i]==m) printf("%s\n",d[i]);
        }

    }
    return 0;
}
