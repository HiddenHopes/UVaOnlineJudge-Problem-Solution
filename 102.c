#include<stdio.h>

int main(){
    long long int b1,g1,c1,b2,g2,c2,b3,g3,c3,sum,min;
    int index;
    char str[][6]={"BCG","BGC","CBG","CGB","GBC","GCB"};
    while(scanf("%lld %lld %lld %lld %lld %lld %lld %lld %lld",&b1,&g1,&c1,&b2,&g2,&c2,&b3,&g3,&c3)==9){
        min = 4611686018427387904;
        sum = b2+b3 + c1+c3 + g1+g2; if(min>sum) {min = sum; index = 0;}
        sum = b2+b3 + g1+g3 + c1+c2; if(min>sum) {min = sum; index = 1;}
        sum = c2+c3 + b1+b3 + g1+g2; if(min>sum) {min = sum; index = 2;}
        sum = c2+c3 + g1+g3 + b1+b2; if(min>sum) {min = sum; index = 3;}
        sum = g2+g3 + b1+b3 + c1+c2; if(min>sum) {min = sum; index = 4;}
        sum = g2+g3 + c1+c3 + b1+b2; if(min>sum) {min = sum; index = 5;}
        printf("%s %lld\n",str[index],min);
    }

 return 0;
}
