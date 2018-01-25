#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > graph(100002);
bool visited[100002];
stack<int> st;
void dfs(int u){
    visited[u]=true;
    for(int i=0; i<graph[u].size(); i++){
        int v = graph[u][i];
        if(!visited[v]) dfs(v);
    }
    st.push(u);
}

void dfs2(int u){
    visited[u]=true;
    for(int i=0; i<graph[u].size(); i++){
        int v = graph[u][i];
        if(!visited[v]) dfs2(v);
    }
}

int main(){
    freopen("in.txt","r",stdin);
    freopen("out.txt", "w", stdout);
    int tc, n, e, x, y;
    cin>>tc;
    while(tc--){
        cin>>n>>e;
        for(int i=0; i<n; i++) graph[i].clear();
        for(int i=1; i<=e; i++){
            cin>>x>>y;
            graph[x-1].push_back(y-1);
        }
        memset(visited,false,sizeof(visited));
        int cnt=0;
        for(int j=0; j<n; j++){
            if(!visited[j]){
                dfs(j);
            }
        }
memset(visited,false,sizeof(visited));
        for(int j=0; j<n; j++){
            int u = st.top();
            st.pop();
            if(!visited[u]){
                cnt++;
                dfs2(u);
            }
        }
        cout<<cnt<<endl;
    }
return 0;
}
