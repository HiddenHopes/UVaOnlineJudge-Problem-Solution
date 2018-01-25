#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("in2.txt","r",stdin);
    char str[1000000];
    char * pch;
    int a[100000], tmp;
    while(gets(str))
    {
        int n = 0;
        pch = strtok (str," ,.");
        while (pch != NULL)
        {
            sscanf(pch,"%d",&a[n++]);

            pch = strtok (NULL, " ,.");
        }


        stack<int> p,sum;
        int f = 1;
        for(int i=0; i<n; i++){
            if(a[i]<0){
                p.push(-1*a[i]);
                sum.push(0);
            }
            else {
                if((!p.empty())&&a[i]==p.top()) {

                        p.pop();

                        if(sum.top()!=0) sum.pop();

                        tmp = sum.top()+a[i];
                        sum.pop();

                        if((!sum.empty())&&sum.top()!=0) {
                            tmp = sum.top()+tmp;
                            sum.pop();
                            sum.push(tmp);
                        }
                        else sum.push(tmp);
                        if(p.empty()) sum.pop();
                         if((!p.empty())&&(!sum.empty()))if(p.top()<=sum.top()){f = 0; break;}
                }
                else {f = 0; break;}
            }
        }
        if(p.empty()&&f==1) printf(":-) Matrioshka!\n");
        else printf(":-( Try again.\n");

    }
    return 0;
}
