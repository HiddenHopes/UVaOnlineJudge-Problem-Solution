#include<stdio.h>
#include<math.h>

int main()
{
    int q,i,x,y,m,n;
freopen("in.txt","r",stdin);
    while(scanf("%d",&q)==1){
        if(q==0)break;
        scanf("%d%d",&n,&m);
        for (i=1;i<=q;i++){
            scanf("%d%d",&x,&y);
            if(x==n||y==m)printf("divisa\n");
            else {
                if(y>m) printf("N");
                else printf("S");

                if(x>n)printf("E\n");
                else printf("O\n");
            }
        }
    }
    return 0;
}
