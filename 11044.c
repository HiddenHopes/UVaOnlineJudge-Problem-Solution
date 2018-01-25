#include<stdio.h>


int main()
{
    int t,n,v,m;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&m);
        v=(n/3)*(m/3);

        printf("%d\n",v);

    }
    return 0;
}
