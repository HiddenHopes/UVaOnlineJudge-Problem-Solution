#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,r,n,m;
    int a[500002];
    memset(a,0,sizeof a);
    freopen("in.txt","r",stdin);
    while(cin>>n&&n!=0){
        if((n & (n - 1))==0) {cout<<n<<endl; continue;}
        if(a[n]!=0) {cout<<a[n]<<endl; continue;}
        m = n;
        r = -1;
        while(m){
            r++;
            m=m/2;
        }
        x = 1<<r;
        x = (n%x)*2;
        cout<<x<<endl;
        a[n]=x;
    }
    return 0;
}
