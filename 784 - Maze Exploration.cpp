//flood-fill
#include <bits/stdc++.h>
using namespace std;

int r,c[110];
char s[110][110];

void floodfill(int i,int j) {
    if(i<0 || i>r-1 || j<0 || j>c[i]-1 || (s[i][j]!=' '&& s[i][j]!='*'))
        return ;

    s[i][j] = '#';
    floodfill(i-1,j);
    floodfill(i,j+1);
    floodfill(i,j-1);
    floodfill(i+1,j);
}

int main(){
    int i,j,t;
    freopen("in.txt","r",stdin);
    scanf("%d",&t);
    getchar();

    while(t--)
    {
        r=0;
        while(1){
            gets(s[r]);
            c[r] = strlen(s[r]);
            if(s[r][0]=='_') break;
            r++;
        }

        i=0;
        while(i<r)
        {
            j=0;
            while(j<c[i])
            {
                if(s[i][j] == '*')
                {
                    floodfill(i,j);
                    break;
                }
                j++;
            }
            i++;
        }
        for(i=0;i<=r;i++)printf("%s\n",s[i]);
    }
return 0;
}
