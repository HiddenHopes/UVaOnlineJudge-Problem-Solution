#include<bits/stdc++.h>
using namespace std;

int main(){
   char c, p;
    int x[27]={0,0,1,2,3,0,1,2,0,0,2,2,4,5,5,0,1,2,6,2,3,0,1,0,2,0,2};
    freopen("in.txt","r",stdin);
while(scanf("%c",&c)==1){
    	if(c=='\n'){ printf("\n");p='9';}
    	else if (c=='\0') ;
    	else if (x[c-64]==0);
    	else {
    		if (x[c-64]==x[p-64]) ;
    		else printf("%d",x[c-64]);
        }
        p=c;
    }
    return 0;
}
