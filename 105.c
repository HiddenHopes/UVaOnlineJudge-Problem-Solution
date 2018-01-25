#include<stdio.h>
#include<string.h>

int main(){
    int x[10002], i, mx = 0, a,h,b;
    memset(x,0,sizeof(x));
    freopen("in.txt","r",stdin);
    while(scanf("%d %d %d",&a,&h,&b)==3){
        for(i=a;i<b;i++){
            if(x[i]<h) x[i]=h;
        }
        if(b>mx) mx = b;
    }
    for(i=1;i<mx;i++){
        if(x[i-1]!=x[i]){
            printf("%d %d ",i,x[i]);
        }
    }
    printf("%d %d\n",i,x[i]);
 return 0;
}
