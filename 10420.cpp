#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, i;
    char c[77],s[77];
    freopen("in.txt","r",stdin);
    map<string,int> mp;
    std::map<string,int>::iterator it;
    scanf("%lld",&t);
    while(t--){
        scanf("%s",c);
        gets(s);

        mp[c]=mp[c]+1;
    }
    for (it=mp.begin(); it!=mp.end(); ++it)
    cout << it->first << " " << it->second << '\n';
    return 0;
}
