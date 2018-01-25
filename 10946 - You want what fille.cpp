//flood-fill
#include <bits/stdc++.h>
using namespace std;

int r,c,cnt;
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

    if(i<0 || i>r-1 || j<0 || j>c-1 || s[i][j]=='.')
        return ;

    if(s[i][j]==ch){
        cnt++;
        s[i][j] = '.';
        floodfill(i-1,j);
        floodfill(i,j+1);
        floodfill(i,j-1);
        floodfill(i+1,j);
        floodfill(i-1,j-1);
        floodfill(i+1,j+1);
        floodfill(i+1,j-1);
        floodfill(i-1,j+1);
    }
}

int main(){
    int i,k=1;
freopen("in.txt","r",stdin);
    while(scanf("%d %d",&r,&c)==2)
    {
        if(r==0 && c==0)
        break;
        printf("Problem %d:\n",k++);

        DT data[2502];
        memset(data,0,sizeof(data));
        getchar();


        for(i=0;i<r;i++)
            cin>>s[i];
        i=0;
        int idx = 0;
        while(i<r)
        {
            int j=0;
            while(j<c)
            {
                if(s[i][j] != '.')
                {
                    cnt = 0;
                    ch = s[i][j];
                    data[idx].ltr = ch;
                   // cout << data[ch-'a'].ltr << " " << data[ch-'a'].freq << '\n';
                    floodfill(i,j);
                    data[idx].freq = cnt;
                    idx++;
                }
                j++;
            }
            i++;
        }
        sort(data,data+idx,cmp);
        for (int it=0; it<idx; ++it)
       cout <<data[it].ltr << " " << data[it].freq << '\n';
    }
return 0;
}
