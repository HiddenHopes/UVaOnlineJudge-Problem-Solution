#include <algorithm>
#include <cstdio>
using namespace std;

#define INF 100

int main() {
  int V, E, u, v, w, AdjMatrix[66][66];
map< pair < pair<int,int> , pair<int,int> >, int> mp;
  pair<int, int> ii,jj;
  for (int i = 1; i <= 64; i++) {
    for (int j = 1; j <= 64; j++)
        ii.first = i;
        ii.second = j;
      mp[ii][j] = INF;
    AdjMatrix[i][i] = 0;
  }


  for (int i = 1; i <=64 ; i++) {
    AdjMatrix[i][] = 1;
  }

  for (int k = 1; k <= 64; k++)
    for (int i = 0; i <= 64; i++)
      for (int j = 0; j <= 64; j++)
        AdjMatrix[i][j] = min(AdjMatrix[i][j], AdjMatrix[i][k] + AdjMatrix[k][j]);

  for (int i = 0; i < V; i++)
    for (int j = 0; j < V; j++)
      printf("APSP(%d, %d) = %d\n", i, j, AdjMatrix[i][j]);

  return 0;
}
