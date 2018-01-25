//flood-fill
#include <bits/stdc++.h>
using namespace std;


int main(){
    int i,j,k=0,cnt;
int r,c;
char s[110][110];
freopen("in.txt","r",stdin);

    while(scanf("%d%d",&r,&c)==2)
    {
        getchar();
        if(r==0 && c==0)
        break;

        for(i=0;i<r;i++)
            cin>>s[i];

        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(s[i][j]=='.') s[i][j]='0';
            }
        }
        i=0;
        while(i<r)
        {
            j=0;
            while(j<c)
            {
                if(s[i][j] == '*')
                {
                    if(s[i-1][j-1]!='*'&&i>=1&&j>=1) s[i-1][j-1] = s[i-1][j-1]+1;
                    if(s[i-1][j]!='*'&&i>=1&&j>=0) s[i-1][j] = s[i-1][j]+1;
                    if(s[i-1][j+1]!='*'&&i>=1&&j>=-1) s[i-1][j+1] = s[i-1][j+1]+1;
                    if(s[i][j-1]!='*'&&i>=0&&j>=1) s[i][j-1] = s[i][j-1]+1;
                    if(s[i][j+1]!='*'&&i>=0&&j>=-1) s[i][j+1] = s[i][j+1]+1;
                    if(s[i+1][j-1]!='*'&&i>=-1&&j>=1) s[i+1][j-1] = s[i+1][j-1]+1;
                    if(s[i+1][j]!='*'&&i>=-1&&j>=0) s[i+1][j] = s[i+1][j]+1;
                    if(s[i+1][j+1]!='*'&&i>=-1&&j>=-1) s[i+1][j+1] = s[i+1][j+1]+1;
                }
                j++;
            }
            i++;
        }

        if(k) printf("\n");
        k=k+1;
        printf("Field #%d:\n",k);

        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                printf("%c",s[i][j]);
            }
            printf("\n");
        }
    }
return 0;
}
