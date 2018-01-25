#include<bits/stdc++.h>
using namespace std;

int main(){

    freopen("in.txt","r",stdin);
    char s[2000];
    int n;
    while(scanf("%d\n",&n)==1&&n){
        n=n%26;
        gets(s);
        int l=strlen(s);
        for(int i=0;i<l;i++){

            if(isupper(s[i])){
                if(s[i]+n>'Z') {n=n-('Z'-s[i]);printf("%c",64+n);}
                if(s[i]+n<'A') {n=(s[i]-'A')+n;printf("%c",90+n);}
                else printf("%c",s[i]+n);
            }
            else if(islower(s[i])){
                if(s[i]+n>'z') {n=n-('z'-s[i]);printf("%c",96+n);}
                if(s[i]+n<'a') {n=(s[i]-'a')+n;printf("%c",122+n);}
                else printf("%c",s[i]+n);
            }

            else printf("%c",s[i]);
        }
        printf("\n");
    }
    return 0;
}
