#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int gcd_a(int n, int a[]){
    if(n==1) return a[0];
    if(n==2) return gcd(a[0], a[1]);
    int h = n / 2;
    return gcd(gcd_a(h, &a[h-1]), gcd_a(n - h, &a[h]));
}
int main(){
    int i,j,k,gcd,a[1002], d[1002];
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    while(scanf("%d", &a[0])==1){
        if(a[0]==0) break;
        i = 1;
        while(scanf("%d", &a[i])==1){
            if(a[i]==0)break;
            i++;
        }

        for(j=0;j<i-1;j++){
            d[j] = abs(a[j+1]-a[j]);
        }

        gcd = gcd_a(j,d);
        printf("%d\n",gcd);
}
    return 0;
}
