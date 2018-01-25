#include<math.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
    int k, deg, i, z, t;
    double r, b, a[5000], x1, x2,mx,mn;
    //freopen("in.txt","r",stdin);
    scanf("%d\n",&t);
    while(t--){
        scanf("%d",&deg);
        for(i=0;i<=deg;i++){
            scanf("%lf",&a[i]);
        }
        z = deg - 2;
        while(z--){
            scanf("%lf",&r);
            b = 0;
            for(k=0;k<deg;k++){
                b = b*r+a[k];
                a[k] = b;
            }
            deg--;
        }
        x1 = (-a[1]+sqrt(a[1]*a[1]-4*a[0]*a[2]))/(2*a[0]);
        x2 = (-a[1]-sqrt(a[1]*a[1]-4*a[0]*a[2]))/(2*a[0]);
        if(x1>x2) {mx = x1; mn =x2;}
        else {mx = x2; mn =x1;}

        printf("%.1lf\n%.1lf\n",mx,mn);
    }
return 0;
}
