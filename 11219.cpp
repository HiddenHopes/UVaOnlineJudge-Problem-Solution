#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    string today,birthdate;
    int i,n,t;
    int y1,y2,m1,m2,d1,d2,ans;
    cin>>t;
    for(int k=1; k<=t; k++){
        cin>>today>>birthdate;
        string s,p;
        s = s + today[6]+today[7]+today[8]+today[9]+ today[3]+today[4]+today[0]+today[1];
        y1 =  atoi(s.c_str());
        p = p + birthdate[6]+birthdate[7]+birthdate[8]+birthdate[9]+ birthdate[3]+birthdate[4]+birthdate[0]+birthdate[1];
        y2 =  atoi(p.c_str());
        ans = (y1 - y2);
      if (ans<0) cout<<"Case #"<<k<<": Invalid birth date\n";
      else if ((ans/10000)>130) cout<<"Case #"<<k<<": Check birth date\n";
      else if (ans>0) cout<<"Case #"<<k<<": "<<ans/10000<<endl;
      else  cout<<"Case #"<<k<<": 0\n";

    }
    return 0;
}
