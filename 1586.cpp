#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,n;
    double ans;
    map<char, double>mp;
    mp['C'] = 12.0100, mp['H'] = 1.0080, mp['O'] = 16.0000, mp['N'] = 14.0100;
    char x;
    cin>>t;
    string s;
	while(t--){
        ans =0.0;
        cin>>s;
        n = s.length();
        for(int i=0; i<n; i++){
            m = 1;
            if(isalpha(s[i])){
                x = s[i];
                if( i+1<n &&isdigit(s[i+1]) ){
                    m = (s[i+1]-'0');
                    if( i+2<n && isdigit(s[i+2])){
                        m = 10*m + (s[i+2]-'0');
                        i++;
                    }
                    i++;
                }
                ans =  ans + mp[x]*m;
            }
        }
        cout <<fixed<<setprecision(3)<<ans << endl;
	}
	return 0;
}
