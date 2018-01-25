//flood-fill
#include <bits/stdc++.h>
using namespace std;

int r,c;
char s[110][110];

void floodfill(int i,int j) {

    if(i<0 || i>r-1 || j<0 || j>c-1 || s[i][j]!='@')
        return ;

    s[i][j] = '*';

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
    int i,cnt;

    while(scanf("%d%d",&r,&c)==2)
    {
        getchar();
        if(r==0 && c==0)
        break;

        for(i=0;i<r;i++)
            cin>>s[i];
        i=0;
        cnt=0;
        while(i<r)
        {
            int j=0;
            while(j<c)
            {
                if(s[i][j] == '@')
                {
                    cnt++;
                    floodfill(i,j);
                }
                j++;
            }
            i++;
        }
        printf("%d\n",cnt);
    }
return 0;
}
