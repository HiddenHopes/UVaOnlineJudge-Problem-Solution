//flood-fill
#include <bits/stdc++.h>
using namespace std;

int r,c;
char ch, s[110][110];

struct DT
{
    char ltr;
    int freq;
};

bool cmp(DT a, DT b)
{
    if(a.freq > b.freq) return true;
    else if(a.freq == b.freq and a.ltr < b.ltr) return true;

    return false;
}

void floodfill(int i,int j) {

    if(i<0 || i>r-1 || j<0 || j>c-1 || s[i][j]=='*')
        return ;

    if(s[i][j]==ch){
        s[i][j] = '*';
        floodfill(i-1,j);
        floodfill(i,j+1);
        floodfill(i,j-1);
        floodfill(i+1,j);
    }
}

int main(){
    int t,i,k;
freopen("in.txt","r",stdin);
scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        printf("World #%d\n",k);
        scanf("%d%d",&r,&c);
        DT data[26];
        memset(data,0,sizeof(data));
        getchar();
        if(r==0 && c==0)
        break;

        for(i=0;i<r;i++)
            cin>>s[i];
        i=0;
        int idx = 0;
        while(i<r)
        {
            int j=0;
            while(j<c)
            {
                if(s[i][j] != '*')
                {
                    ch = s[i][j];
                    if(data[ch-'a'].ltr==0)idx++;
                    data[ch-'a'].ltr = ch;
                    data[ch-'a'].freq = data[ch-'a'].freq + 1;
                   // cout << data[ch-'a'].ltr << " " << data[ch-'a'].freq << '\n';
                    floodfill(i,j);
                }
                j++;
            }
            i++;
        }
        sort(data,data+26,cmp);
        for (int it=0; it<idx; ++it)
       cout <<data[it].ltr << ": " << data[it].freq << '\n';
    }
return 0;
}
