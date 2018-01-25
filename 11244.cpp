//flood-fill
#include <bits/stdc++.h>
using namespace std;

int r,c;
char s[110][110];
int cnt;
void floodfill(int i,int j) {

    if(i<0 || i>r-1 || j<0 || j>c-1 || s[i][j]=='.')
        return ;

    cnt++;
    s[i][j] = '.';

    floodfill(i-1,j);
    floodfill(i-1,j+1);
    floodfill(i-1,j-1);
    floodfill(i,j+1);
    floodfill(i,j-1);
    floodfill(i+1,j);
    floodfill(i+1,j+1);
    floodfill(i+1,j-1);

}

int main(){
    int i, ans;

    while(scanf("%d%d",&r,&c)==2)
    {
        if(r==0&&c==0) break;
        getchar();
        if(r==0 && c==0)
        break;

        for(i=0;i<r;i++)
            cin>>s[i];
        i = 0;
        ans = 0;
        while(i<r)
        {
            int j=0;
            while(j<c)
            {
                if(s[i][j] == '*')
                {
                    cnt = 0;
                    floodfill(i,j);
                    if(cnt==1) ans++;
                }
                j++;
            }
            i++;
        }
        printf("%d\n",ans);
    }
return 0;
}
