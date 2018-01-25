#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,m,way[30005]={0}, coins[12]={0,5,10,20,50,100,200,500,1000,2000,5000,10000};
    double n;
    //freopen("in.txt","r",stdin);
    way[0]=1;
    for(i=1;i<12;i++){
    for(j=coins[i];j<=30001;j+=5){
        if(way[j-coins[i]]>0)way[j]=way[j]+way[j-coins[i]];
    }
    }
    while(scanf("%lf",&n)==1){
if(n==0.00)break;
            m = int(n*100);
            if(m%5!=0) m = m + 1;

        printf("%6.2lf%17lld\n",n,way[m]);
    }
    return 0;
}

