#include<bits/stdc++.h>
using namespace std;
int a[1002][1002];
int main(){
    int t, i, j, l;
    char s[1005],r[1005];
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

scanf("%d", &t);
gets(s);
    while(t--){
        gets(s);
        l = strlen(s);
        if(l<1){printf("0\n");continue;}
        j = 0;
        for(i=l-1;i>=0;i--) r[j++] =s[i];
        r[j] = '\0';
for(i=0;i<=l;i++){
    a[i][0]=0;
}
for(j=0;j<=l;j++){
    a[0][j]=0;
}

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
