#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n,x, cnt;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(scanf("%d", &n)==1){
        x = 1; cnt = 1;
        while(x!=0){
            if((x/n)>0&&x!=0) x = x%n;
            else {x = x*10 + 1;cnt = cnt + 1;}
        }
        printf("%d\n",cnt);
    }
    return 0;
}
