#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int n,x;
    while(cin>>n&&n!=0){
        cin>>x;
        int sum = x;
        for(int i=2; i<=n; i++) {
            cin>>x;
            sum=sum^x;
        }
        if(sum==0) cout<<"No\n";
        else cout<<"Yes\n";
    }
 return 0;
}
