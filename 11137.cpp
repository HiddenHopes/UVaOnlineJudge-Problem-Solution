#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,n,way[10002]={0} ,coins[22];
    freopen("in.txt","r",stdin);
    for(i=0;i<22;i++){
        coins[i]=i*i*i;
    }
    way[0]=1;
    for(i=1;i<22;i++){
    for(j=coins[i];j<=10000;j++){
        if(way[j-coins[i]]>0)way[j]=way[j]+way[j-coins[i]];
    }
    }
    while(scanf("%lld",&n)==1){
    printf("%lld\n",way[n]);
    }
    return 0;
}

