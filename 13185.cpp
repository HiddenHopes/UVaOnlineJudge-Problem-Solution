#include <bits/stdc++.h>
using namespace std;
int divisorSum(int n)
{
    int sum = 1;
    int s = sqrt(n);
    for (int i=2; i<=s; i++)
    {
        if (n%i==0)
        {
            if (n/i == i){
                sum+=i;
            }

            else{
                sum=sum+i+(n/i);
            }
        }
    }
    return sum;
}
int main()
{
    int t,n,x;
    cin>>t;
    while(t--){
        cin>>n;
        x=divisorSum(n);
        if(x<n) cout<<"deficient"<<endl;
        else if(x==n) cout<<"perfect"<<endl;
        else if(x>n) cout<<"abundant"<<endl;
    }
    return 0;
}
