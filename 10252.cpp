#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    char x[1002],y[1002];
    int a[26],b[26];
    while(gets(x)){
        gets(y);
        memset(a,0,sizeof a);
        memset(b,0,sizeof b);
        int n=strlen(x);
        int m=strlen(y);
        for(int i=0; i<n; i++){
            a[x[i]-97]++;
        }
        for(int i=0; i<m; i++){
            b[y[i]-97]++;
        }
        int r=0;
        for(int i=0; i<26; i++){
            if(a[i]<b[i]) r = a[i];
            else r = b[i];
            for(int j=0; j<r; j++)
                cout<<char(i+97);
        }
        cout<<endl;
    }
    return 0;
}
