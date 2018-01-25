#include<bits/stdc++.h>
using namespace std;
int m[1002][1002];
int main(){
    int t, i, j, k=1, a, b;
    int s[1005],r[1005];
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    while(scanf("%d %d", &a,&b)==2){
        if(a==0&&b==0) break;
for(i=0;i<a;i++) scanf("%d",&s[i]);
for(j=0;j<b;j++) scanf("%d",&r[j]);
for(i=0;i<=a;i++){
    m[i][0]=0;
}
for(j=0;j<=b;j++){
    m[0][j]=0;
}

        for(i=1;i<=a;i++){

            for(j=1;j<=b;j++){

                if(s[i-1]==r[j-1]){
                    m[i][j] = m[i-1][j-1]+1;
                }
                else if(m[i-1][j]>=m[i][j-1]){
                    m[i][j] = m[i-1][j];
                }
                else{
                    m[i][j] = m[i][j-1];
                }

            }
        }
        printf("Twin Towers #%d\n",k);
        printf("Number of Tiles : %d\n\n", m[a][b]);
        k++;
    }

    return 0;
}
