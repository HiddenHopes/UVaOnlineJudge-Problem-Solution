#include <bits/stdc++.h>
using namespace std;
#define mx 1000007

int bs[(mx/32)+2];
void sieve(){
     int N = 1000007;
	 int sqrtN;
	 int64_t i, j;
     sqrtN = sqrt( N );
     bs[0]=3;
     for (i = 2; i <= N; i++)
        if (!(bs[i>>5] & (1<<(i&31)))){
            for (j = i * i; j <= N; j += i)
                bs[j>>5]= bs[j>>5] | (1<<(j&31));
    }
}

int readchar() {
    static char buf[1048576];
    static char *p = buf, *end = buf;
    if(p == end) {
        if((end = buf + fread(buf, 1, 1048576, stdin)) == buf) return EOF;
        p = buf;
    }
    return *p++;
}
int ReadInt(int *x) {
    static char c, neg;
    while((c = readchar()) < '-')    {if(c == EOF) return 0;}
    neg = (c == '-') ? -1 : 1;
    *x = (neg == 1) ? c-'0' : 0;
    while((c = readchar()) >= '0')
        *x = (*x << 3) + (*x << 1) + c-'0';
    *x *= neg;
    return 1;
}

int cnt[1000007];
void digitPrime(){
    int sum,x,i,j;
    cnt[0] = 0;
    for(i=1; i<=1000007; i++){
       if(!(bs[i>>5] & (1<<(i&31)))){
            sum = 0;
            x = i;
            while(x>0){
                sum = sum + x%10;
                x/=10;
            }
            if(!(bs[sum>>5] & (1<<(sum&31)))) {cnt[i] = cnt[i-1]+1;}
            else cnt[i] = cnt[i-1];
        }
        else cnt[i] = cnt[i-1];
    }
}

int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, x, y, ans;
    sieve();
    digitPrime();

    ReadInt(&t);
    while(t--){

        ReadInt(&x); ReadInt(&y);
        ans = cnt[y] - cnt[x-1];
        printf("%d\n",ans);
    }
    return 0;
}
