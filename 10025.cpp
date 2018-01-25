#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k,sum;
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        if(n<0) n = -n;
        sum = 0; k = 0;
        if(n==0) k = 3;
        while(sum<n){
            k++;
            sum+=k;

        }

        if((sum-n)%2==0);
        else if((sum+k+1-n)%2==0) k = k+1;
        else if((sum+k+2-n)%2==0) k = k+2;
        printf("%d\n",k);
        if(t) printf("\n");
    }
    return 0;
}
