#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("in.txt","r",stdin);//freopen("out.txt","w",stdout);
    int a,b,c,d,L,x;
    while(scanf("%d %d %d %d %d\n",&a, &b, &c, &d, &L)==5){
        if(d==0) break;
        int cnt = 0;
        for(int i=0; i<=L; i++){
            x = a*i*i+b*i+c;
            if(x%d==0) cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
