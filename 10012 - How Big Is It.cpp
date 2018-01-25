#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i;
    double a, b, p, q, r, x[20], mn, L;
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=0;i<n;i++){scanf("%lf",&x[i]);}
        mn = 1e100;
        sort(x, x+n);
        do{
            L = x[0];
            for(i=1;i<n;i++){

                x1 = x[i-1];
                x2 = x[i];
                r = x1 + x2;
                b = fabs(x1 - x2);
                a = sqrt(r*r - b*b);
                if(x1<x2){
                    if(x1+a<x2) a = x2;
                }
                else {
                    if(x2+a<x1) a = x1;
                }
                L = L + a;
            }
            L = L + x[n-1];
            if(mn>L) mn = L;
        }
        while(next_permutation(x, x + n));

        if(n==1) printf("%.3lf\n",x[0]+x[0]);
        else printf("%.3lf\n",mn);
    }
    return 0;
}
