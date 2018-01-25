
#include <bits/stdc++.h>
using namespace std;

int x[1000],y[1000],cnt,r,c;
char s[110][110],q[110];
int v[110][110];

void floodfill(int i, int j)
{
    if(i<0 || i>r-1 || j<0 || j>c-1 || s[i][j]=='L'||v[i][j]==1)
        return ;

    v[i][j] = 1;
    cnt++;
    floodfill(i-1,j);
    floodfill(i,j+1);
    floodfill(i,j-1);
    floodfill(i+1,j);
    floodfill(i-1,j-1);
    floodfill(i-1,j+1);
    floodfill(i+1,j-1);
    floodfill(i+1,j+1);
}

int main()
{
    int i,j,k,l,t;
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    scanf("%d",&t);
    while(t--)
    {
        r=0;
        k=0;
        memset(s,0,sizeof(s));
        scanf("%s",s[r]);
        c = strlen(s[r]);
        r++;
        while(scanf("%s",s[r])==1 && !isdigit(s[r][0]))
        {
            r++;
        }
        sscanf (s[r],"%d",&x[k]);
        scanf ("%d",&y[k]);
        k++;
        gets(q);
        while(gets(q)&&strlen(q)){
            sscanf (q,"%d %d",&x[k],&y[k]);
            k++;
        }

        for(i=0; i<k; i++)
        {
            memset(v,0,sizeof(v));
            cnt=0;
            if(s[x[i]-1][y[i]-1] == 'W')
                floodfill(x[i]-1,y[i]-1);
            printf("%d\n",cnt);
        }
if(t) puts("");
    }
    return 0;
}
