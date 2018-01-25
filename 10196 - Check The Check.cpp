#include<stdio.h>
char board[9][9];
bool chekdbyKnight(int x, int y, char ch){
    if((x-2>=0&&y+1<8)&&board[x-2][y+1]==ch) return true;
    if((x-2>=0&&y-1>=0)&&board[x-2][y-1]==ch) return true;
    if((x+2<8&&y+1<8)&&board[x+2][y+1]==ch) return true;
    if((x+2<8&&y-1>=0)&&board[x+2][y-1]==ch) return true;
    if((x-1>=0&&y-2>=0)&&board[x-1][y-2]==ch) return true;
    if((x+1<8&&y-2>=0)&&board[x+1][y-2]==ch) return true;
    if((x-1>=0&&y+2<8)&&board[x-1][y+2]==ch) return true;
    if((x+1<8&&y+2<8)&&board[x+1][y+2]==ch) return true;
    return false;
}
bool chekdbyRook(int x, int y, char ch){
    for(int i = y+1; i<8;i++){
        if(board[x][i]=='.') continue;
        else if(board[x][i]==ch) return true;
        else break;
    }
    for(int i = y-1; i>=0;i--){
        if(board[x][i]=='.') continue;
        else if(board[x][i]==ch) return true;
        else break;
    }
    for(int i = x+1; i<8;i++){
        if(board[i][y]=='.') continue;
        else if(board[i][y]==ch) return true;
        else break;
    }
    for(int i = x-1; i>=0;i--){
        if(board[i][y]=='.') continue;
        else if(board[i][y]==ch) return true;
        else break;
    }
    return false;
}
bool chekdbyBshop(int x, int y, char ch){
    for(int i=x+1, j=y+1; i<8,j<8; i++,j++){
        if(board[i][j]=='.') continue;
        else if(board[i][j]==ch) return true;
        else break;
    }
    for(int i=x+1,j=y-1; i<8,j>=0; i++,j--){
        if(board[i][j]=='.') continue;
        else if(board[i][j]==ch) return true;
        else break;
    }
    for(int i=x-1,j=y+1; i>=0,j<8; i--,j++){
        if(board[i][j]=='.') continue;
        else if(board[i][j]==ch) return true;
        else break;
    }
    for(int i=x-1,j=y-1; i>=0,j>=0; i--,j--){
        if(board[i][j]=='.') continue;
        else if(board[i][j]==ch) return true;
        else break;
    }

    return false;
}
bool chekdbyQueen(int x, int y, char ch){
    if(chekdbyBshop(x, y, ch)) return true;
    if(chekdbyRook(x,y,ch)) return true;
    return false;
}
bool blackCheck(int x, int y){
    if(x+1<8){
        if((y-1>=0&&board[x+1][y-1]=='P')||(y+1<8&&board[x+1][y+1]=='P')) return true;
    }
    if(chekdbyRook(x,y,'R')) return true;
    if(chekdbyBshop(x,y,'B')) return true;
    if(chekdbyKnight(x,y,'N')) return true;
    if(chekdbyQueen(x,y,'Q')) return true;
    return false;
}
bool whitecheck(int x, int y){
    if(x-1>=0){
        if((y-1>=0&&board[x-1][y-1]=='p')||(y+1<8&&board[x-1][y+1]=='p')) return true;
    }
    if(chekdbyRook(x,y,'r')) return true;
    if(chekdbyBshop(x,y,'b')) return true;
    if(chekdbyKnight(x,y,'n')) return true;
    if(chekdbyQueen(x,y,'q')) return true;

    return false;
}
int main(){
    int i,j,k=0;
    freopen("in.txt","r",stdin);
    while(1){
        k++;
        for(i=0;i<8;i++){
            gets(board[i]);
        }
        int br=-1,bc=-1,wr=-1,wc=-1;
        for(i=0;i<8;i++){
            for(j=0;j<8;j++){
                if(board[i][j]=='k') { br=i, bc=j;}
                if(board[i][j]=='K') { wr=i, wc=j;}
                if(br!=-1&&wr!=-1) break;
            }
        }
        if(br==-1||wr==-1) break;
        if(blackCheck(br,bc)) printf("Game #%d: black king is in check.\n",k);
        else if(whitecheck(wr,wc))printf("Game #%d: white king is in check.\n",k);
        else printf("Game #%d: no king is in check.\n",k);
        gets(board[0]);
    }
    return 0;
}
