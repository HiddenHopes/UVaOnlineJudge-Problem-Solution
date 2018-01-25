#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, i, j, k, l, x, y, z, a, b, c, d, e, f, sum;
    freopen("in.txt","r",stdin);
    while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&e)==5){
        if(!a&&!b&&!c&&!d&&!e)break;
        f = 0;
        for (r=1; r<=3; r++){
            if(i==1)sum=a;
            else if(i==2)sum=-a;
            else if(i==3)sum=a;
            x = sum;
        for (i=1; i<=3; i++){
            if(i==1)sum=a+b;
            else if(i==2)sum=a-b;
            else if(i==3)sum=a*b;
            x = sum;
            for (j=1; j<=3; j++){
                sum = x;
                if(j==1)sum=sum+c;
                else if(j==2)sum=sum-c;
                else if(j==3)sum=sum*c;
                y = sum;
                for (k=1; k<=3; k++){
                    sum = y;
                    if(k==1)sum=sum+d;
                    else if(k==2)sum=sum-d;
                    else if(k==3)sum=sum*d;
                    z = sum;
                    for (l=1; l<=3; l++){
                        sum = z;
                        if(l==1)sum=sum+e;
                        else if(l==2)sum=sum-e;
                        else if(l==3)sum=sum*e;

                        if(sum==23){f=1;break;}
                    }
                    if(f==1){break;}
                }
                if(f==1){break;}
            }
            if(f==1){break;}
        }
        if(f) printf("Possible\n");
        else printf("Impossible\n");

    }
    return 0;
}
