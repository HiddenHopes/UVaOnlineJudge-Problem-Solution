#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <cmath>
#include <memory.h>
#include <utility>
#include <stack>
#include <queue>
#include <vector>
#include <ctime>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vii;

int N;
bool bd[100][100], v[100][100];
int dx[] = {0, 0, 1, -1, 1, 1, -1, -1};
int dy[] = {1, -1, 0, 0, 1, -1, 1, -1};

void flood(int r, int c){
     if(v[r][c] || !bd[r][c]) return;
     v[r][c] = 1;
     int nr, nc;
     for(int i = 0; i < 8; i++){
          nr = r + dx[i]; nc = c + dy[i];
          if(nr >= 0 && nr < N && nc >= 0 && nc < N) flood(nr, nc);
     }
}

int main(){
     int T, a, b;
     char c[200];
     freopen("in.txt","r",stdin);
     scanf("%d", &T);
     while(T--){
          scanf("%s", c);
          N = strlen(c);
          for(int i = 0; i < N; i++){
               for(int j = 0; j < N; j++) bd[i][j] = c[j] == 'W';  //assigns 1 or 0
               if(i != N - 1) scanf("%s", c);
          }
          gets(c);
          while(gets(c) && strlen(c)){
               sscanf(c, "%d %d", &a, &b);
               memset(v, 0, sizeof(v));
               flood(a-1, b-1);
               int siz = 0;
               for(int i = 0; i < N; i++)
                    for(int j = 0; j < N; j++)
                         siz += v[i][j];
               printf("%d\n", siz);
          }
          if(T) printf("\n");
     }
}
