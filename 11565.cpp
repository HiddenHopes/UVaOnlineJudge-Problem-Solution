#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n,a,b,c,x,y,z,i,j,k;
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        bool flag = false;
        for(i=-100; i<=100; i++){
            for(j=i+1; j<=100; j++){
                for(k=j+1; k<=100; k++){
                    y = i*j*k;
                    z = i*i+j*j+k*k;
                    x = i + j + k;
                    if(y==b && z==c && x==a){
                        flag = true;
                        break;
                    }

                }
                if(flag) break;
            }
            if(flag) break;
        }
        if(flag) cout<<i<<" "<<j<<" "<<k<<endl;
        else cout<<"No solution."<<endl;
    }
}
