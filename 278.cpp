#include<stdio.h>

int main(){
    int t, a, b, ans;
    char c;
freopen("in.txt","r",stdin);
    scanf("%d\n",&t);
    while(t--){
        scanf("%c %d %d\n",&c,&a,&b);

        if(c=='r'||c=='Q') ans = (a<b)?a:b;
        else if(c=='K') ans = a+b;
        else if(c=='k') ans = (a*b)/2;
        printf("%d\n",ans);
    }

    return 0;
}
