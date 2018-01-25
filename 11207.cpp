#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,p,n;
    double w,h,m,x,y,z,r;
    freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
    while(scanf("%d",&n),n)
    {
        m=0;
        for(i=1; i<=n; i++){
            scanf("%lf%lf",&w,&h);

            x=min(w,h/4);

            y=min(h,w/4);

            z=min(h,w)/2;

            r=max(max(x,y),z);

            if(r>m){m=r;p=i;}
        }
        printf("%d\n",p);
    }
    return 0;
}
