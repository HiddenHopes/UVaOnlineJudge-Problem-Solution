#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll sqr, n, sum, i,k, x, a[9];
    k=1;i=16;
    while(1){
        sum = 0;
        sqr=i*i;
        n = sqr;
        while(n){
            sum = sum + n%10;
            n = n/10;
        }
        x = sqrt(sum);
        if(x*x==sum&&(k==1||a[k-1]+1==i)) {a[k]=i; k++;}
        else k = 1;
        if(k>7) break;
        i++;
    }
    for(int j=1;j<=7;j++){
        printf("%lld %lld\n",a[j],a[j]*a[j]);
    }
    return 0;
}
