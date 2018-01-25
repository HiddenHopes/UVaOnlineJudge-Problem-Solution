#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, r, i, x;

    while(cin>>n && n){
        while(cin>>x && x){
            stack<int> s;
            r = 1;
            for(i=1;i<=n;i++){
                if(i>1) cin>>x;
                while(1){
                    if(s.empty()!=1 && s.top()==x) {s.pop();break;}
                    if(r<=n)s.push(r);
                    r++;
                    if(r>n+1) break;
                }
            }
            if(s.empty())printf("Yes\n");
            else printf("No\n");
        }
        cout <<"\n";
    }
return 0;
}
