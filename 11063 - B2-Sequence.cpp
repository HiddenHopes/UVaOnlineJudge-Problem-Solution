#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, e, t, i, j, k, f, g, a[102], b[100000];
    freopen("in.txt","r",stdin);
    t = 1;
    while(scanf("%d",&n)==1){
        g = 1; e = 1;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++){
            if(a[i]<1) {g = 0;break;}
        }
        for(i=1;i<n;i++){
            if(a[i-1]>a[i]) {e = 0; break;}
        }
        if(g==0||e==0) {printf("Case #%d: It is not a B2-Sequence.\n\n",t);t++;continue;}
        k = 0;
        for(i=0;i<n;i++){
            for(j=i;j<n;j++){
                b[k] = a[i] + a[j];
                k++;
            }
        }
        sort(b, b+k);
        f = 1;
        for(i=1;i<k;i++){
            if(b[i] == b[i-1]) {f = 0; break;}
        }

        if(f==1&&g==1) printf("Case #%d: It is a B2-Sequence.\n\n",t);
        else printf("Case #%d: It is not a B2-Sequence.\n\n",t);
        t++;
    }
    return 0;
}
