#include <bits/stdc++.h>
using namespace std;
long gcd(long a,long b){
    if (a%b==0) return b;
    else return gcd(b,a%b);
}

void Divbygcd(long& a,long& b){
    long g=gcd(a,b);
    a/=g;
    b/=g;
}

long C(int n,int k){
    long numerator=1,denominator=1,toMul,toDiv,i;
    if (k>n/2) k=n-k; /* use smaller k */
    for (i=k; i; i--)
    {
        toMul=n-k+i;
        toDiv=i;
        Divbygcd(toMul,toDiv); /* always divide before multiply */
        Divbygcd(numerator,toDiv);
        Divbygcd(toMul,denominator);
        numerator*=toMul;
        denominator*=toDiv;
    }
    return numerator/denominator;
}
int main()
{
    int tc,n,t,p,x,y,ans;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d %d %d",&n,&t,&p);
        x = t-(n*p)+n-1;
        y = n-1;
        ans = C(x,y);
        printf("%d\n",ans);
    }
    return 0;
}
