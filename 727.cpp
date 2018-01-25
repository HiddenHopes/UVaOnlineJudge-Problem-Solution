#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,x;
    while(scanf("%d", &n)==1){
        if(n==0) break;
        queue<int> q;
        for(i=1;i<=n;i++){
            q.push(i);
        }
        printf("Discarded cards:");
        while(q.size()>2){
            printf(" %d,",q.front());
            q.pop();
            x = q.front();
            q.push(x);
            q.pop();
        }
        if(q.size()==2){
            printf(" %d",q.front());
            q.pop();
        }
        printf("\nRemaining card: %d\n",q.front());

    }

    return 0;
}
