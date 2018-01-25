#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main(){
    freopen("in.txt","r",stdin);//freopen("out.txt","w",stdout);
    int i,j,l,mx,cnt;
    char s[500005];
    while(gets(s)){
        cnt=0;
        mx = 0;
        l = strlen(s);
        for(i=0; i<l; i++){

            if(s[i]=='.') cnt++;
            else break;
        }
        if(mx<cnt-1) mx = cnt - 1;
        cnt=0;
        for(j=i+1; j<l; j++){

            if(s[j]=='.') cnt++;
            else {if(mx<(((cnt+1)/2)-1)) mx = ((cnt+1)/2)-1;cnt = 0;}
        }

        cnt=0;
        for(i=l-1; i>=0; i--){
            if(s[i]=='.') cnt++;
            else break;
        }
        if(mx<cnt-1) mx = cnt - 1;
        printf("%d\n",mx);
    }
    return 0;
}
