#include<bits/stdc++.h>
using namespace std;
#define INF 9999
int graph[102][102];

int main() {
  int V, E, u, v, m,x,y,cnt;
int a[101];
  freopen("in.txt", "r", stdin);

  while(scanf("%d", &V)==1&&V!=0){
  for (int i = 1; i <= V; i++) {
    for (int j = 1; j <= V; j++){
      graph[i][j] = INF;
    }
  }
  while(scanf("%d",&x)&&x!=0) {
    while(scanf("%d",&y)&&y!=0){
        graph[x][y] = 1;
    }
  }

  for (int k = 1; k <= V; k++){
    for (int i = 1; i <= V; i++)
      for (int j = 1; j <= V; j++)
        graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
  }
scanf("%d", &m);
  for (int i = 1; i <= m; i++){
    scanf("%d", &x);
   cnt=0;
    for (int j = 1; j <= V; j++)
      if(graph[x][j]==9999) {cnt++; a[cnt]=j;}
cout<<cnt;
    for (int j = 1; j <= cnt; j++)
        cout<<" "<<a[j];
    cout<<endl;
  }
}
  return 0;
}
