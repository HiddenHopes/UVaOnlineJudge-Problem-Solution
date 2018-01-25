#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,b,k,x,sum,choklet;
    cin>>t;
    while(t--){
        cin>>n>>b;
        choklet = 0;
        for(int i=1; i<=b; i++){
            cin>>k;
            sum = 1;
            for(int j=1; j<=k; j++){
                cin>>x;
                sum = (sum*x)%n;
            }
            choklet = (choklet + sum)%n;
        }
        cout<<choklet<<endl;
    }
    return 0;
}
