#include<stdio.h>
#include<ctype.h>
#include<string.h>

int Qchecked,qchecked;
char a[9][9];

void checkbyblack(int x, int y){
    for(int i=1;i<8;i++){
       if(x-i<0)break;
       else if(a[x-i][y]!='.'){
            if(a[x-i][y]=='r'||a[x-i][y]=='q'){Qchecked=1;return;}
            break;
       }
    }
    for(int i=1;i<8;i++){
       if(x+i>7)break;
       else if(a[x+i][y]!='.'){
            if(a[x+i][y]=='r'||a[x+i][y]=='q'){Qchecked=1;return;}
            break;
       }
    }
    for(int i=1;i<8;i++){
       if(y-i<0)break;
       else if(a[x][y-i]!='.'){
            if(a[x][y-i]=='r'||a[x][y-i]=='q'){Qchecked=1;return;}
            break;
       }
    }
    for(int i=1;i<8;i++){
       if(y+i>7)break;
       else if(a[x][y+i]!='.'){
            if(a[x][y+i]=='r'||a[x][y+i]=='q'){Qchecked=1;return;}
            break;
       }
    }
    for(int i=1;i<8;i++){
       if(x-i<0||y-i<0)break;
       else if(a[x-i][y-i]!='.'){
            if(a[x-i][y-i]=='b'||a[x-i][y-i]=='q'){Qchecked=1;return;}
            break;
       }
    }
    for(int i=1;i<8;i++){
       if(x+i>7||y+i>7)break;
       else if(a[x+i][y+i]!='.'){
            if(a[x+i][y+i]=='b'||a[x+i][y+i]=='q'){Qchecked=1;return;}
            break;
       }
    }
    for(int i=1;i<8;i++){
       if(x-i<0||y+i>7)break;
        else if(a[x-i][y+i]!='.'){
            if(a[x-i][y+i]=='b'||a[x-i][y+i]=='q'){Qchecked=1;return;}
            break;
       }
    }
    for(int i=1;i<8;i++){
       if(x+i>7||y-i<0)break;
        else if(a[x+i][y-i]!='.'){
            if(a[x+i][y-i]=='b'||a[x+i][y-i]=='q'){Qchecked=1;return;}
            break;
       }
    }

    if(x>0&&y>0&&a[x-1][y-1]=='p'){Qchecked=1;return;}
    if(x>0&&y<7&&a[x-1][y+1]=='p'){Qchecked=1;return;}

    if(x>1&&y<7&&a[x-2][y+1]=='n'){Qchecked=1;return;}
       if(x>1&&y>0&&a[x-2][y-1]=='n'){Qchecked=1;return;}
       if(x<6&&y<7&&a[x+2][y+1]=='n'){Qchecked=1;return;}
       if(x<6&&y>0&&a[x+2][y-1]=='n'){Qchecked=1;return;}
       if(x>0&&y<6&&a[x-1][y+2]=='n'){Qchecked=1;return;}
       if(x>0&&y>1&&a[x-1][y-2]=='n'){Qchecked=1;return;}
       if(x<7&&y<6&&a[x+1][y+2]=='n'){Qchecked=1;return;}
       if(x<7&&y>1&&a[x+1][y-2]=='n'){Qchecked=1;return;}

}

void checkbywhite(int x, int y){
    for(int i=1;i<8;i++){
       if(x-i<0)break;
       else if(a[x-i][y]!='.'){
            if(a[x-i][y]=='R'||a[x-i][y]=='Q'){qchecked=1;return;}
            break;
       }
    }
    for(int i=1;i<8;i++){
       if(x+i>7)break;
       else if(a[x+i][y]!='.'){
            if(a[x+i][y]=='R'||a[x+i][y]=='Q'){qchecked=1;return;}
            break;
       }
    }
    for(int i=1;i<8;i++){
       if(y-i<0)break;
       else if(a[x][y-i]!='.'){
            if(a[x][y-i]=='R'||a[x][y-i]=='Q'){qchecked=1;return;}
            break;
       }
    }
    for(int i=1;i<8;i++){
       if(y+i>7)break;
       else if(a[x][y+i]!='.'){
            if(a[x][y+i]=='R'||a[x][y+i]=='Q'){qchecked=1;return;}
            break;
       }
    }
    for(int i=1;i<8;i++){
       if(x-i<0||y-i<0)break;
       else if(a[x-i][y-i]!='.'){
            if(a[x-i][y-i]=='B'||a[x-i][y-i]=='Q'){qchecked=1;return;}
            break;
       }
    }
    for(int i=1;i<8;i++){
       if(x+i>7||y+i>7)break;
       else if(a[x+i][y+i]!='.'){
            if(a[x+i][y+i]=='B'||a[x+i][y+i]=='Q'){qchecked=1;return;}
            break;
       }
    }
    for(int i=1;i<8;i++){
       if(x-i<0||y+i>7)break;
        else if(a[x-i][y+i]!='.'){
            if(a[x-i][y+i]=='B'||a[x-i][y+i]=='Q'){qchecked=1;return;}
            break;
       }
    }
    for(int i=1;i<8;i++){
       if(x+i>7||y-i<0)break;
        else if(a[x+i][y-i]!='.'){
            if(a[x+i][y-i]=='B'||a[x+i][y-i]=='Q'){qchecked=1;return;}
            break;
       }
    }

    if(x>0&&y>0&&a[x-1][y-1]=='P'){qchecked=1;return;}
    if(x>0&&y<7&&a[x-1][y+1]=='P'){qchecked=1;return;}

    if(x>1&&y<7&&a[x-2][y+1]=='N'){qchecked=1;return;}
       if(x>1&&y>0&&a[x-2][y-1]=='N'){qchecked=1;return;}
       if(x<6&&y<7&&a[x+2][y+1]=='N'){qchecked=1;return;}
       if(x<6&&y>0&&a[x+2][y-1]=='N'){qchecked=1;return;}
       if(x>0&&y<6&&a[x-1][y+2]=='N'){qchecked=1;return;}
       if(x>0&&y>1&&a[x-1][y-2]=='N'){qchecked=1;return;}
       if(x<7&&y<6&&a[x+1][y+2]=='N'){qchecked=1;return;}
       if(x<7&&y>1&&a[x+1][y-2]=='N'){qchecked=1;return;}

}


int main(){
    int i,j,t=1;

    freopen("in.txt","r",stdin);
    while(1){
        for(i=0;i<8;i++){
            gets(a[i]);
        }
        if(a[0][2]=='.')break;
        getchar();
        Qchecked=0;
        qchecked=0;
        for(i=0;i<8;i++){
            for(j=0;j<8;j++){
                if(a[i][j]=='K') checkbyblack(i,j);
                else if(a[i][j]=='k') checkbywhite(i,j);
            }
        }

        if(Qchecked)printf("Game #%d: white king is in check.\n",t);
       else if(qchecked)printf("Game #%d: black king is in check.\n",t);
        else printf("Game #%d: no king is in check.\n",t);
        t++;
    }

 return 0;
}
