
#include <cstdio>
#include <vector>
using namespace std;

#define MAX 1001
#define DFS_BLACK 1
#define DFS_WHITE -1
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
int cliq;
vi dfs_num;
vector<vii> adj(MAX);

void dfs(int u)
{
    dfs_num[u] = DFS_BLACK;
    for (int i = 0; i < (int)adj[u].size(); i++)
    {
        ii v = adj[u][i];
        if (dfs_num[v.first] == DFS_WHITE)
            cliq++, dfs(v.first);
    }
}

int main()
{
    int v, e, x,t, y,mx;
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d", &v, &e);
        for(int i=0; i<=v; i++)adj[i].clear();
        for (int i = 0; i < e; i++)
        {
            scanf("%d %d", &x, &y);
            adj[x-1].push_back(ii(y-1, 1));
        }
        mx = 0;
        dfs_num.assign(v, DFS_WHITE);
        for (int i = 0; i < v; i++)
        {
            if (dfs_num[i] == DFS_WHITE)
            {
                cliq = 0;
                dfs(i);
                if(mx<cliq) mx = cliq;
            }
        }
        printf("%d\n", mx);
    }
}
