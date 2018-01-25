#include<stdio.h>
#include<string.h>


long long  bigmod(long long a, long long b, long long m) {
   long long p = 1;
   while (b != 0) {
      if (b%2 == 0)   b/= 2;
      else {
         b = (b-1)/2;
         p = (p*a)%m;
      }
      a = (a*a)%m;
   }
   return p%m;
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
