#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,l,mx;
    char s[250];
    int a[250];
    scanf("%d\n", &n);
    while(gets(s)){
        memset(a,0,sizeof a);
        l = strlen(s);
        mx = 0;
        for(int i=0; i<l; i++){
            if(isalpha(s[i])){
                s[i] = tolower(s[i]);
                a[s[i]]++;
                if(mx<a[s[i]]) mx = a[s[i]];
            }
        }

        for(int j='a'; j<='z'; j++){
            if(a[j]==mx) printf("%c",j);
        }
        printf("\n");
    }
}
