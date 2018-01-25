#include<stdio.h>


int main()
{
    int a,b,c,d,deg,x,y,z;
    freopen("in.txt","r",stdin);
    while(scanf("%d%d%d%d",&a,&b,&c,&d)==4){
        if(!a&&!b&&!c&&!d)break;
        if(a<b)x=40+a-b;
        else x=a-b;
        if(b>c)y=40+c-b;
        else y=c-b;
        if(c<d)z=40+c-d;
        else z=c-d;
        deg=1080+(x+y+z)*9;

        printf("%d\n",deg);

    }
    return 0;
}
