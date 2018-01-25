#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, i, j, l,a[102][102];
    char s[1005],r[1005];
    //freopen("in.txt","r",stdin);
   printf("\n");
scanf("%d\n", &t);
    while(t--){
        gets(s);
        l = strlen(s);
        j = 0;
        for(i=l-1;i>=0;i--) r[j++] =s[i];
        r[j] = '\0';
        puts(s);
        puts(r);
        memset(a,0,sizeof(a));
        for(i=1;i<=l;i++){

            for(j=1;j<=l;j++){

                if(s[i-1]==r[j-1]){
                    a[i][j] = a[i-1][j-1]+1;
                }
                else if(a[i-1][j]>=a[i][j-1]){
                    a[i][j] = a[i-1][j];
                }
                else{
                    a[i][j] = a[i][j-1];
                }

            }
        }
        printf("%d\n", a[l][l]);

    }

    return 0;
}
