#include<bits/stdc++.h>
using namespace std;

#define MAX 27
#define DFS_BLACK 1
#define DFS_WHITE -1
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

vi dfs_num;
vector<vii> adj(MAX);

void dfs(int u) {
    dfs_num[u] = DFS_BLACK;
    for (int i = 0; i < (int)adj[u].size(); i++) {
        ii v = adj[u][i];
        if (dfs_num[v.first] == DFS_WHITE)
            dfs(v.first);
    }
}

int main() {
    char s[4];
    int v,t;
    //freopen("in.txt","r",stdin);
    scanf("%d",&t);
    gets(s);
    gets(s);

    while(t--){
        gets(s);
        v = s[0]-64;
        for(int i=0;i<v;i++)   adj[i].clear();
        while (gets(s)) {
            int l=strlen(s);
            if(l==0) break;
            adj[s[0]-65].push_back(ii(s[1]-65, 1));
            adj[s[1]-65].push_back(ii(s[0]-65, 1));

        }

    int numCC = 0;
    dfs_num.assign(v, DFS_WHITE);
    for (int i = 0; i < v; i++)
        if (dfs_num[i] == DFS_WHITE) ++numCC,dfs(i);
    printf("%d\n", numCC);
    if(t) printf("\n");
    }
}
