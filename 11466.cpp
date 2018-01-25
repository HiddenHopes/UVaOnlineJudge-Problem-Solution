# include <stdio.h>
# include <math.h>
long long int k, m;
long long int primeFactors(long long int n)
{
    long long int i, mx = -1;
    k = 0;
    if(n%2==0) k = 1;
    while (n%2 == 0)
    {
        n = n/2;
    }
    long long int sq = sqrt(n);
    for (i = 3; i <= sq; i = i+2)
    {
        if(n%i==0) {
            k = k + 1;
            if(i>mx) mx = i;
            while (n%i == 0)
            {
                n = n/i;
            }
        }

    }

    if(n>mx&&n<m && n>2) {mx = n;k=k+1;}
    return mx;
}

int main()
{
    long long int mx;
    while(scanf("%lld",&m)==1){
        if(m==0) break;
        if(m<0) m = -m;
        mx = primeFactors(m);
        if(k>1) printf("%lld\n",mx);
        else printf("-1\n");
    }

    return 0;
}
