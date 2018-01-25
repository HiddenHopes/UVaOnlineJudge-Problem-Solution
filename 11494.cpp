#include<stdio.h>
#include<stdlib.h>

int main(){
    int m,a,b,c,d;
    while(scanf("%d %d %d %d",&a,&b,&c,&d)==4){
        if(!a&&!b&&!c&&!d) break;
        if(a==c&&b==d)m=0;
        else if(a==c||b==d)m=1;
        else if(abs(a-c)==abs(b-d))m=1;
        else m=2;
        printf("%d\n",m);

    }
    return 0;
}
