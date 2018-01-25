#include<bits/stdc++.h>
#include "string"
#include "boost/algorithm/string.hpp"
using namespace std;
using namespace boost;

int main(){
    int t,n, i, j, l;
    char s[4];
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

scanf("%d", &t);
gets(s);
    while(t--){
        string str;
        getline (cin,str);
        scanf("%d", &n);
        gets(s);
        for(i=1;i<=n;i++){
        string sb;
        getline (cin,sb);
        bool b = contains(s, t);
    if(b) cout << "y" << endl;
    else cout<<"n"<<endl;
    }
}
    return 0;
}
