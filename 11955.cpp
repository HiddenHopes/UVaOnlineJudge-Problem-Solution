#include<bits/stdc++.h>
using namespace std;

long long int c[52][52];
void nCr(){
    c[1][1]=1;
    c[2][1]=c[2][2]=1;
    for(int i=3; i<=51; i++){
        for(int j=2; j<=i; j++)
            c[i][j] = c[i-1][j]+c[i-1][j-1];
        c[i][i]=1;
        c[i][1]=1;
    }
}

int main(){
    freopen("in.txt","r",stdin); freopen("out.txt","w",stdout);
    nCr();
    int t;
    char s[200], *a, *b, *pch;
    long long int p;
    cin>>t;
    for(int i=1; i<=t; i++){
        cin>>s;
        a = strtok(s," (+)^");
        b = strtok(NULL," (+)^");
        pch = strtok(NULL," (+)^");
        sscanf(pch,"%lld",&p);
        cout<<"Case "<<i<<": ";

        for(int k=p,j=0; k>=0,j<=p; k--,j++){
            if(c[p+1][j+1]>1)cout<<c[p+1][j+1]<<"*";
            if(k>0)cout<<a;
            if(k>1)cout<<"^"<<k;
            if(k>0&&j>0)cout<<"*";
            if(j>0)cout<<b;
            if(j>1)cout<<"^"<<j;
            if(k)cout<<"+";
        }
        cout<<endl;
    }
    return 0;
}
