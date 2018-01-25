#include<stdio.h>
int main(){
    long long int i, p = 1;
    for(i=1;i<=100;i++){
        p = 2*p;
        printf("2^%lld = %lld\n",i,p);
    }

}
