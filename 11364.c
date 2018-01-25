#include<stdio.h>
#include<math.h>

int main()
{
    int t,n,i,x,mx,mn;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        mx=0;
        mn=999;
        for (i=0;i<n;i++){
            scanf("%d",&x);
            if(x>mx)mx=x;
            if(x<mn)mn=x;
        }

        printf("%d\n",(mx-mn)*2);

    }
    return 0;
}
