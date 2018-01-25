#include<bits/stdc++.h>
using namespace std;
deque<int> dq;

int main(){
    int x,n;
    int a[500002];
    memset(a,0,sizeof a);
    //freopen("in.txt","r",stdin);
        freopen("out.txt","w",stdout);

    n=1;
    while(n<500001){
        //if(a[n]!=0) {cout<<a[n]<<endl; continue;}
        for(int i=1; i<=n; i++){
            dq.push_back(i);
        }
        while(dq.size()>1){
            dq.pop_front();
            x = dq.front();
            dq.pop_front();
            dq.push_back(x);
        }
        cout<<dq.front()<<endl;
        a[n]=dq.front();
        dq.pop_back();
        n++;
    }
    return 0;
}
