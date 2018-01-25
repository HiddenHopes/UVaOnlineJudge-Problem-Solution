#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 1000000000

int main() {
  int V, E, s, t, u, v, w, k, n;
  vector<vii> AdjList;


scanf("%d", &n);
for(k=1;k<=n;k++){
  scanf("%d %d %d %d", &V, &E, &s, &t);

  AdjList.assign(V, vii());
  for (int i = 0; i < E; i++) {
    scanf("%d %d %d", &u, &v, &w);
    AdjList[u].push_back(ii(v, w));
    AdjList[v].push_back(ii(u, w));
  }

  vi dist(V, INF); dist[s] = 0;
  priority_queue< ii, vector<ii>, greater<ii> > pq; pq.push(ii(0, s));

  while (!pq.empty()) {
    ii front = pq.top(); pq.pop();
    int d = front.first, u = front.second;
    if (d > dist[u]) continue;
    for (int j = 0; j < (int)AdjList[u].size(); j++) {
      ii v = AdjList[u][j];
      if (dist[u] + v.second < dist[v.first]) {
        dist[v.first] = dist[u] + v.second;
        pq.push(ii(dist[v.first], v.first));
  } } }

    if(dist[t]<INF)printf("Case #%d: %d\n", k, dist[t]);
    else printf("Case #%d: unreachable\n",k);
}
  return 0;
}
