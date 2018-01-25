#include <bits/stdc++.h>
using namespace std;

int add(int a){
    int sum,x;
    sum = a%10;                 a=a/10;
    x = a%10;                   x=x*2;
    sum = sum + x%10 + x/10;    a=a/10;

    sum = sum + a%10;           a=a/10;
    x = a%10;                   x=x*2;
    sum = sum + x%10 + x/10;    a=a/10;
    sum = sum + a;
    return sum;
}

int main() {
    int t, sum, a, b, c, d;
    cin>>t;
    while(t--){
        sum = 0;
        cin>>a>>b>>c>>d;
        sum = add(a) + add(b) + add(c) + add(d);

        if(sum%10==0) cout<<"Valid"<<endl;
        else cout<<"Invalid"<<endl;
    }
    return 0;
}
