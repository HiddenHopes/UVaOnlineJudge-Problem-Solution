#include<bits/stdc++.h>
using namespace std;
//first approach from right-most digit
/*
void binToDec(string s){
    int p = 1;
    int sum = 0;
    int length = s.length()-1;
    for(int i = length; i>=0; i--){
        sum = sum + (s[i]-'0')*p;
        p = p*2;
    }
    cout<<sum<<endl;
}
*/

//second approach from left-most digit
/*
void binToDec(string s){
    int sum = 0;
    int length = s.length()-1;
    sum = s[0]-'0';
    for(int i=1; i<=length; i++){
        sum = sum<<1;
        sum = sum + (s[i]-'0');
    }
    cout<<sum<<endl;
}
*/
int main()
{
    char c;

    while(cin>>c){
        int sum = 0;
        sum = c-'0';
        while(cin>>c && c!='#'){

            sum = sum<<1;
            sum = (sum + (c-'0'))%131071;
        }
        if(sum%131071==0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
