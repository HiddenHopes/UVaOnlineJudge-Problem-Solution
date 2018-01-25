#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,l,Cap[28],sml[28], mx;
    char s[4000];
freopen("in.txt","r",stdin);
    while(gets(s)){
        l = strlen(s);
        memset(Cap, 0 , sizeof(Cap));
        memset(sml, 0, sizeof(Cap));
        mx = 0;
        for(i=0;i<l;i++){
            if(islower(s[i])) {
                sml[s[i]-96] = sml[s[i]-96] + 1;
                if(mx<sml[s[i]-96]) mx  = sml[s[i]-96];
            }
            else if(isupper(s[i])){
                Cap[s[i]-64] = Cap[s[i]-64] + 1;
                if(mx<Cap[s[i]-64]) mx  = Cap[s[i]-64];
            }
        }
        for(i=1;i<=26;i++){
            if(Cap[i]==mx) printf("%c",i+64);
        }
        for(i=1;i<=26;i++){
            if(sml[i]==mx) printf("%c",i+96);
        }
        printf(" %d\n",mx);
    }

 return 0;
}
