#include<bits/stdc++.h>
using namespace std;

int main(){
    int k, i, j, l;
    char s[100005];
    freopen("in.txt","r",stdin);
    while(scanf("%s", s)==1){
        l = strlen(s);
        for(k=0;k<l;k++){
            j = l - 1;
            for(i=k;i<l;i++){
                if(s[i]!=s[j]) break;
                j--;
            }
            if(i==l) break;
        }

        printf("%s",s);
        for(i=k-1;i>=0;i--)printf("%c",s[i]);
        printf("\n");
    }

    return 0;
}
