#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll i, j, t, h, k;
ll Divide_Conquer_Fib(ll n)
{
    i = h = 1;
    j = k = 0;
    while (n > 0)
    {
        if (n%2 == 1)
        {
            t = j*h;
            j = i*h + j*k + t;
            i = i*k + t;
        }
        t = h*h;
        h = 2*k*h + t;
        k = k*k + t;
        n = (ll) n/2;
    }
    return j;
}
int main(){
    ll n;
    while(scanf("%lld", &n)==1&&n){
        printf("%lld\n",Divide_Conquer_Fib(n));
    }

    return 0;
}
