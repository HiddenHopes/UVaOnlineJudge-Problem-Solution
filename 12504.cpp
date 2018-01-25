#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    char s[10];
    gets(s);
    int t = atoi(s);
    while(t--){
        int flag = 0;
        map<string, string> mp,nmp;
        map<string, string> :: iterator it;
        set<string> add, del, chng;
        set<string> :: iterator itt;
        char a[100],b[100];
        char str[10000];
        char * pch;
        gets(str);
        pch = strtok (str," ,}:{");
        while (pch != NULL){
            sscanf(pch,"%s",a);
            pch = strtok (NULL, " ,}:{");
            sscanf(pch,"%s",b);
            pch = strtok (NULL, " ,}:{");
            mp[a] = b;
        }
        char * pchh;
        gets(str);
        pchh = strtok (str," ,}:{");
        while (pchh != NULL){
            sscanf(pchh,"%s",a);
            pchh = strtok (NULL, " ,}:{");
            sscanf(pchh,"%s",b);
            pchh = strtok (NULL, " ,}:{");
            it = mp.find(a);
            if (it != mp.end()) {

                if(it->second!=b){
                    chng.insert(a);
                    flag = 1;
                }
                mp.erase(it);
            }
            else {
                flag = 1;
                add.insert(a);
            }
        }
        if(flag==0&&mp.size()==0) printf("No changes\n");
        else{
            if(add.size()>0){
                itt=add.begin();
                cout<< "+" << *itt;
                ++itt;
                for (itt; itt!=add.end(); ++itt)
                    cout <<"," << *itt;
                cout<<"\n";
            }
            if(mp.size()>0){
                it=mp.begin();
                cout<< "-" << it->first;
                ++it;
                for (it; it!=mp.end(); ++it)
                    cout << "," << it->first ;
                cout <<"\n";
            }
            if(chng.size()>0){
                itt=chng.begin();
                cout << "*" << *itt;
                ++itt;
                for (itt; itt!=chng.end(); ++itt)
                cout  << "," << *itt;
                cout << "\n";
            }
        }
        if(t) printf("\n");
    }
    return 0;
}

