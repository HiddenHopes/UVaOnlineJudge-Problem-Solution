#include <bits/stdc++.h>
using namespace std;

int r,c;
char s[110][110];
char land;
int cnt,mx;
void floodfill(int i,int j) {

    if(i<0 || i>r-1 || j<0 || j>c-1 || s[i][j]!=land)
        return ;
    cnt++;
    s[i][j] = '*';

    floodfill(i-1,j);
    floodfill(i,j+1);
    floodfill(i,j-1);
    floodfill(i+1,j);
    if(j==0)floodfill(i,c-1);
    if(j==c-1) floodfill(i,0);

}

int main(){
    int i, x, y;
freopen("in.txt","r",stdin);
freopen("out.txt","w",stdout);

    while(scanf("%d%d",&r,&c)==2)
    {
        getchar();
        if(r==0 && c==0)
        break;

        for(i=0;i<r;i++)
            cin>>s[i];
        cin>>x>>y;
        land = s[x][y];
        floodfill(x,y);
        i=0;
        mx = 0;
        while(i<r)
        {
            int j=0;
            while(j<c)
            {
                if(s[i][j] == land)
                {
                    cnt=0;
                    floodfill(i,j);
                    if(mx<cnt) mx = cnt;
                }
                j++;
            }
            i++;
        }
        printf("%d\n",mx);
    }
return 0;
}
