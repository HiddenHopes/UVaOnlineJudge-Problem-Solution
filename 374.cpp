#include<stdio.h>
#include<string.h>
#define square(x) x*x;
long long int bigmod(long long int b,long long int p, long long int m){
   int a;
   if (p == 0)
      return 1;
   if (p%2 == 0){
      a = bigmod(b,p/2,m);
      return (a*a) % m;
   }else{
      return ((b % m) * bigmod(b,p-1,m)) % m;
   }
}
int main(){
    long long int b,p,m,a,i;

    while(scanf("%lld",&b)==1){
        scanf("%lld",&p);
        scanf("%lld",&m);
        a = bigmod(b,p,m);
        printf("%lld\n",a);

    }
return 0;
}
