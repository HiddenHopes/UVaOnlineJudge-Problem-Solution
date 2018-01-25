#include<bits/stdc++.h>

int main(){
    int t, x, y, y1, y2, f, col, n;

freopen("in.txt","r",stdin);
    scanf("%d\n",&t);
    while(t--){
        scanf("%d", &col);
        int f = 1;
        scanf("%d %d", &y1, &y2);
        x = abs(y1-y2);
        for(int i = 2; i<=col; i++){
            scanf("%d %d", &y1, &y2);
            y = abs(y1-y2);
            if(x!=y) {f=0;}
        }
        if(f==0) printf("no\n");
        else printf("yes\n");
        if(t) printf("\n");
    }

    return 0;
}
