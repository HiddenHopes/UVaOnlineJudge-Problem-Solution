#include<bits/stdc++.h>
using namespace std;

long long int cntBachelor(long long int n) {
    if(n < 0)  n = -n;
    if(n < 2)  return 0;
    return (n-2)/4+1;
}

int main(){


    long long int n, a, b, m, x, i, cnt, t1, t2;
    char cmd[50];
    while(gets(cmd)){
        if(sscanf(cmd,"%lld %lld", &n, &m) == 2){
            scanf("%I64d",&m);
            if(n>m) swap(n,m);
            if(n < 0 && m > 0) {
                t1 = cntBachelor(n);
                t2 = cntBachelor(m);
                cnt = t1+t2;
            } else {
                if(n < 0)  n = -n, m = -m;
                t1 = cntBachelor(abs(n)-1);
                t2 = cntBachelor(m);
                cnt = abs(t2-t1);
            }
            printf("%I64d\n",cnt);
        }
        else {
            sscanf(cmd, "%lld", &n);
            if(1&n){
            bool flag = false;
            if(n<0) {n = -n; flag = true;}
            a = (n+1)/2;
            b = a - 1;
            if(flag)printf("%I64d %I64d\n",b,a);
            else printf("%I64d %I64d\n",a,b);
            }
            else {
                bool flag = false;
                if(n<0) {n = -n; flag = true;}
                a = n/4 + 1;
                b = a - 2;
                if(n==0){
                    printf("0 0\n");
                }
                else if((n+2)%4==0) {
                printf("Bachelor Number.\n");
            }
            else {
                if(flag)printf("%I64d %I64d\n",b,a);
                else printf("%I64d %I64d\n",a,b);
            }

        }
        }

    }
    return 0;
}
