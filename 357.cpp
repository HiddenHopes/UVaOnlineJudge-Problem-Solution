#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,n,way[30005]={0} ,coins[6]={0,1,5,10,25,50};
    //freopen("in.txt","r",stdin);
    way[0]=1;
    for(i=1;i<6;i++){
    for(j=coins[i];j<=30001;j++){
        if(way[j-coins[i]]>0)way[j]=way[j]+way[j-coins[i]];
    }
    }
    while(scanf("%lld",&n)==1){
            if(way[n]==1) printf("There is only %lld way to produce %lld cents change.\n",way[n], n);
            else printf("There are %lld ways to produce %lld cents change.\n",way[n], n);
    }
    return 0;
}

