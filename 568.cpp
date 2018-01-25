#include<bits/stdc++.h>
using namespace std;


int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    long long int a[10005];
    long long int i,n,m=1;
    a[0]=0;
    for(i=1; i<=10000; i++){
        m = m*i;
        while(m%10==0){
            m/=10;
        }
        m = m%1000000000;
        a[i]=m%10;
    }
    while(scanf("%lld",&n)==1){
        printf("%5lld -> %lld\n",n,a[n]);
    }

    return 0;
}
