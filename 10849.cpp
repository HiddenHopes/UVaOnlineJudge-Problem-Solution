#include<bits/stdc++.h>
using namespace std;

int main(){
   int mov,q,n,x,y,nx,ny,i,t;

    scanf("%d",&t);

    while(t--){
        scanf("%d %d",&q,&n);

        for(i=1;i<=q;i++){
            scanf("%d %d %d %d",&x,&y,&nx,&ny);
            if(x<1||x>n||y<1||y>n||nx<1||nx>n||ny<1||ny>n) mov = -1;
            else if(x==nx&&y==ny) mov = 0;
            else if(abs(ny-y)==abs(nx-x)) mov = 1;
            else if((x+y)%2==(nx+ny)%2) mov = 2;
            else mov = -1;

            if(mov!=-1)printf("%d\n",mov);
            else printf("no move\n");
        }

    }
    return 0;
}
