#include <bits/stdc++.h>
using namespace std;


int main(){
    int t,n,x;
    string s;
    cin>>t;
    for(int i=1; i<=t; i++){
        map<string, int> mp;
        cin>>n;
        for(int j=1; j<=n; j++){
            cin>>s>>x;
            mp[s] = x;
        }
        cin>>x>>s;
        cout<<"Case "<<i<<": ";
        if(mp[s]>0 && mp[s]<=x) cout<<"Yesss\n";
        else if(mp[s]>0 && mp[s]<=x+5) cout<<"Late\n";
        else cout<<"Do your own homework!\n";
    }
    return 0;
}
