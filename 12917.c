#include<stdio.h>
#include<math.h>

int main()
{
    int p,h,o,i,n;
    while(scanf("%d %d %d",&p,&h,&o) == 3)
    {
        if(o-p>=h)
        printf("Props win!\n");
else         printf("Hunters win!\n");

    }
    return 0;
}
