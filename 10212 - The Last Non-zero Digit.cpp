#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t, j, n, x, r, k, sum;
    freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
    while(cin>>n>>r)
    {
        sum = 1;
        k = n-r;
        for(j=n; j>k; j--)
        {
            sum = sum*j;
            while(sum%10==0){
                sum = sum/10;
            }
            sum = sum%1000000000;
        }
        cout<<sum%10<<endl;
    }
    return 0;
}
