#include<bits/stdc++.h>
using namespace std;

bool isMatch(string &a, string &b){
    return a[0]==b[0] || a[1]==b[1];
}
int main()
{
    string card;
int k = 1;
    freopen("in.txt","r",stdin);
    while(cin>>card &&card!="#"){
        vector <stack<string> > pile(52);
        pile[0].push(card);
        for(int i=1;i<52;i++){
            cin>>card;
            pile[i].push(card);
        }

        for(int i=0;i<pile.size();i++){
            if(i-3>=0 && isMatch(pile[i-3].top(), pile[i].top())){
                pile[i-3].push(pile[i].top());
                pile[i].pop();
                if(pile[i].empty())
                    pile.erase(pile.begin()+i);
                i = 0;

            }
            else if(i-1>=0 && isMatch(pile[i-1].top(), pile[i].top())){
                pile[i-1].push(pile[i].top());
                pile[i].pop();
                if(pile[i].empty())
                    pile.erase(pile.begin()+i);
                i = 0;

            }

        }

        cout<<pile.size()<<" pile";
        if(pile.size()>1) cout<<"s";
        cout<<" remaining:";
        for(int i=0;i<pile.size();i++){
            cout<<" "<<pile[i].size();
        }
        cout<<"\n";
    }
return 0;
}
