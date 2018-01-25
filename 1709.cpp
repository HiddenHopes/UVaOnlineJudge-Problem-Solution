#include<bits/stdc++.h>
using namespace std;
double  price[1000005];
int main()
{
    double p, a, b, c, d, mx, mn, dec, maxdec;
    int u,v,n;
    freopen("in.txt","r",stdin);
    while(scanf("%lf ",&p)==1){
        scanf("%lf %lf %lf %lf %d\n",&a, &b, &c, &d, &n);
        for(int k=1;k<=n;k++){
            price[k]= p*(sin(a*k + b) + cos(c*k + d) + 2);
        }
        mx = -1; v = 1;
        mn = 99999999; u = 0;
        maxdec = 0;
        for(int i=1;i<n;i++){
            if(price[i] > price[i+1]) {
                if(price[i]>mx){
                    mx = price[i];
                    v = i;
                    mn = price[i+1];
                    u = i+1;
                    dec = price[v]-price[u];
                    if(maxdec<dec) maxdec = dec;
                }

                if(price[i+1]<mn){
                    mn = price[i+1];
                    u = i+1;
                    dec = price[v]-price[u];
                    if(maxdec<dec) maxdec = dec;
                }
        }
        }
        printf("%.9lf\n",maxdec);
    }
    return 0;
}

