#include<bits/stdc++.h>

using namespace std;
long long int fib[1000000];
long long int f(long long int k){
    if(fib[k]!=-1) return fib[k];
    else if(k==0||k==1) return fib[k]=k;
    else return fib[k] = f(k-1) + f(k-2);
}
int main(){
   long long int t,n,x;
   freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
  t = 1;
  memset(fib,-1,sizeof(fib));
  fib[0]=0;
  fib[1]=1;
    while(scanf("%lld", &n)==1){
        x = f(n);
        printf("The Fibonacci number for %lld is %lld\n",t,x);
        t++;
    }
    return 0;
}
