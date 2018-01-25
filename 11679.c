#include<stdio.h>
#include<math.h>

int main()
{
    int i,f,b,n,d,c,v;
    char r[21];
    freopen("in.txt","r",stdin);
   freopen("out.txt","w",stdout);

    while(scanf("%d%d",&b,&n)==2){
        if(b ==0 &&n == 0)break;
        for(i=1;i<=b;i++){
        scanf("%d",&r[i]);
        }
        for(i=1;i<=n;i++){
        scanf("%d%d%d",&d,&c,&v);
        r[d]=r[d]-v;
        r[c]=r[c]+v;
        }

        f=1;
        for(i=1;i<=b;i++){
           if(r[i] < 0) {f=0; break;}
        }
        if(f == 1) printf("S\n");
        else printf("N\n");
    }
    return 0;
}
