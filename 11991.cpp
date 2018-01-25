#include<bits/stdc++.h>
using namespace std;
deque<int> dq;

int main(){
    int n, m, x, p;
    freopen("in.txt","r",stdin);
    while(cin>>n>>m){
        map<int, vector<int> > mp;
        for(int i=1; i<=n; i++){
            cin>>x;
            mp[x].push_back(i);
        }

        for(int i=1; i<=m; i++){
            cin>>p>>x;
        p-=1;
            if(mp[x].size()>0 && p<mp[x].size()){
                cout<<mp[x][p];
            }
            else cout<<"0";
            cout<<endl;
        }

    }
    return 0;
}
