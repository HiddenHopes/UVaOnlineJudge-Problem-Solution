#include <bits/stdc++.h>
using namespace std;
bool isConsonant(char c){

    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') return false;
    return true;
}
int main()
{
    freopen("in.txt","r",stdin);
  //  freopen("out.txt","w",stdout);
    map<string, string> mp;
    int L, N;
    string s,p;
    cin>>L>>N;
    for(int i=1; i<=L; i++){
        cin>>s>>p;
        mp[s]=p;
    }
    for(int j=1; j<=N; j++){
        cin>>s;
        int x = s.size()-1;
        if(mp[s]=="") {
            if(s[x]=='y' && isConsonant(s[x-1])) {
                s.back() = 'i';
                s = s + "es" ;
                cout<<s<<endl;
            }
            else if(s[x]=='o'||s[x]=='s'||s[x]=='x'||(s[x-1]=='c'&&s[x]=='h')||(s[x-1]=='s'&&s[x]=='h'))
                cout<<s<<"es"<<endl;
            else cout<<s<<"s"<<endl;
        }
        else cout<<mp[s]<<endl;
    }
    return 0;
}
