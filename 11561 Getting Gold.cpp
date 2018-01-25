//flood-fill
#include <bits/stdc++.h>
using namespace std;

int r,c;
char s[110][110];
int mx = 0;
int gold = 0;
void floodfill(int i,int j) {

    if(i<0 || i>r-1 || j<0 || j>c-1){
        return;
    }
    if(s[i][j]=='#') return;

    if(s[i][j]=='G') gold++;
    if(mx<gold) mx = gold;

    if(s[i-1][j]=='T'||s[i+1][j]=='T'||s[i][j-1]=='T'||s[i][j+1]=='T') {
        if(mx<gold) mx = gold;
        gold = 0;
        return;
    }


    floodfill(i-1,j);
    floodfill(i,j+1);
    floodfill(i,j-1);
    floodfill(i+1,j);
    return;
}

int main(){
    int i,cnt;
freopen("in.txt","r",stdin);
    while(scanf("%d%d",&c,&r)==2)
    {
        gets(s[0]);
        if(r==0 && c==0)
        break;

        for(i=0;i<r;i++)
            gets(s[i]);
        for(i=0;i<r;i++)
            cout<<s[i]<<endl;
        i=0;
        while(i<r)
        {
            int j=0;
            while(j<c)
            {
                if(s[i][j] == 'P')
                {
                    floodfill(i,j);
                    break;
                }
                j++;
            }
            i++;
        }
        printf("%d\n",mx);
    }
return 0;
}
