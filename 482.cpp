#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k,i,a[5000];
    char b[5000][200];
    char c;
   freopen("in.txt","r",stdin);
//freopen("out.txt","w",stdout);
scanf("%d\n\n",&t);
    while(t--){
        n=0;
        while(scanf("%d%c",&a[n],&c)==2){

            if(c=='\n') break;
            n++;
        }
        k=0;
        while(scanf("%s%c",b[a[k]-1],&c)==2){

            k++;
            if(c=='\n') break;
        }

        for(i=0;i<=n;i++){
            printf("%s\n",b[i]);
        }
       if(t) printf("\n");
    }
    return 0;
}
