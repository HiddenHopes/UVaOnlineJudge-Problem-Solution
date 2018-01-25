//this problem didn't mention that the number sets are all non negative integers.

#include <bits/stdc++.h>
using namespace std;
inline int abs(int x){
    if(x<0) return -x;
    else return x;
}
int main()
{

    int t=1,a[1002], n,m,x,ans, y, sum, dif,mindif,closest;
    while(cin>>n&&n) {
        cout<<"Case "<<t<<":"<<endl;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a,a+n);

        cin>>m;
        for(int i=1; i<=m; i++){
            cin>>x;
            closest = a[0]+a[1];
            mindif = 2147483647;
            for(int j=0; j<n; j++){
                 dif =2147483647;
                for(int k=j+1; k<n; k++){
                    sum = a[j]+a[k];
                    y = abs(sum-x);

                    if(y<=dif) {
                        dif = y;
                        ans = sum;
                    }
                    else {break;}
                }
                if(dif<mindif){
                    mindif = dif;
                    closest = ans;
                }
            }
            cout<<"Closest sum to "<<x<<" is "<<closest<<"."<<endl;
        }
        t++;
    }
    return 0;
}
