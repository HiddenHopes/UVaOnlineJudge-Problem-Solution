#include<stdio.h>
#include<string.h>
int p[32772];
int is_prime(int n)
{
    if(p[n]!=-1) return p[n];
    if (n == 1) return p[n]=0;
    if (n == 2) return p[n]=1;
    if (n%2 == 0) return p[n]=0;
    for (int i=3; i*i<=n; i+=2)
        if (n%i == 0)
            return p[n]=0;
    return p[n]=1;
}

int main(){
    int n, i, k, cnt;
    memset(p,-1,sizeof(p));
    while(scanf("%d",&n)==1){
        if(!n) break;
        k = n - 3;
        cnt = 0;
        if(is_prime(n-2)) cnt = 1;
        for(i=3;k>=i;i+=2,k-=2){
            if(is_prime(i)){
                if(is_prime(k)) cnt = cnt + 1;
            }
        }
        printf("%d\n",cnt);
    }
return 0;
}
