#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,p,l,x;
    char c[3002];
    freopen("in.txt","r",stdin);

   // freopen("out.txt","w",stdout);
    while(cin>>c){
        stack<char> s;
        l=strlen(c);
        p=l+1;x=0;i=0;
        for(i=0;i<l;i++){

            if(i+1<l&&c[i]=='('&&c[i+1]=='*'){i++;s.push('?');x=x+1;}
            else if(c[i]=='(')s.push(c[i]);
            else if(c[i]=='{')s.push(c[i]);
            else if(c[i]=='[')s.push(c[i]);
            else if(c[i]=='<')s.push(c[i]);

            else if(i+1<l&&c[i]=='*'&&c[i+1]==')'){i++;x=x+1;if(!s.empty()&&s.top()=='?')s.pop();else {p=i+1;break;}}
            else if(c[i]==')'){if(!s.empty()&&s.top()=='(')s.pop();else {p=i+1;break;}}
            else if(c[i]=='}'){if(!s.empty()&&s.top()=='{')s.pop();else {p=i+1;break;}}
            else if(c[i]==']'){if(!s.empty()&&s.top()=='[')s.pop();else {p=i+1;break;}}
            else if(c[i]=='>'){if(!s.empty()&&s.top()=='<')s.pop();else {p=i+1;break;}}
        }
        if(s.empty()&&i==l)printf("YES\n");
        else printf("NO %d\n",p-x);

    }
    return 0;
}

