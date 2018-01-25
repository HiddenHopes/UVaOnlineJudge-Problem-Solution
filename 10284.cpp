#include<stdio.h>
#include<ctype.h>
#include<string.h>

int cnt;
char s[70],a[9][9];

void Qmove(int x, int y){
    for(int i=1;i<8;i++){
       if(x-i<0)break;
       else if(a[x-i][y]=='o')continue;
       else if(a[x-i][y]!='x')break;
       else {a[x-i][y] = 'o';cnt++;}
    }
    for(int i=1;i<8;i++){
       if(x+i>7)break;
       else if(a[x+i][y]=='o')continue;
       else if(a[x+i][y]!='x')break;
       else {a[x+i][y] = 'o';cnt++;}
    }
    for(int i=1;i<8;i++){
       if(y-i<0)break;
       else if(a[x][y-i]=='o')continue;
       else if(a[x][y-i]!='x')break;
       else {a[x][y-i] = 'o';cnt++;}
    }
    for(int i=1;i<8;i++){
       if(y+i>7)break;
       else if(a[x][y+i]=='o')continue;
       else if(a[x][y+i]!='x')break;
       else {a[x][y+i] = 'o';cnt++;}
    }
    for(int i=1;i<8;i++){
       if(x-i<0||y-i<0)break;
       else if(a[x-i][y-i]=='o')continue;
       else if(a[x-i][y-i]!='x')break;
       else {a[x-i][y-i] = 'o';cnt++;}
    }
    for(int i=1;i<8;i++){
       if(x+i>7||y+i>7)break;
       else if(a[x+i][y+i]=='o')continue;
       else if(a[x+i][y+i]!='x')break;
       else {a[x+i][y+i] = 'o';cnt++;}
    }
    for(int i=1;i<8;i++){
       if(x-i<0||y+i>7)break;
       else if(a[x-i][y+i]=='o')continue;
       else if(a[x-i][y+i]!='x')break;
       else {a[x-i][y+i] = 'o';cnt++;}
    }
    for(int i=1;i<8;i++){
       if(x+i>7||y-i<0)break;
       else if(a[x+i][y-i]=='o')continue;
       else if(a[x+i][y-i]!='x')break;
       else {a[x+i][y-i] = 'o';cnt++;}
    }
}

void Rmove(int x, int y){
    for(int i=1;i<8;i++){
       if(x-i<0)break;
       else if(a[x-i][y]=='o')continue;
       else if(a[x-i][y]!='x')break;
       else {a[x-i][y] = 'o';cnt++;}
    }
    for(int i=1;i<8;i++){
       if(x+i>7)break;
       else if(a[x+i][y]=='o')continue;
       else if(a[x+i][y]!='x')break;
       else {a[x+i][y] = 'o';cnt++;}
    }
    for(int i=1;i<8;i++){
       if(y-i<0)break;
       else if(a[x][y-i]=='o')continue;
       else if(a[x][y-i]!='x')break;
       else {a[x][y-i] = 'o';cnt++;}
    }
    for(int i=1;i<8;i++){
       if(y+i>7)break;
       else if(a[x][y+i]=='o')continue;
       else if(a[x][y+i]!='x')break;
       else {a[x][y+i] = 'o';cnt++;}
    }

}
void Bmove(int x, int y){

    for(int i=1;i<8;i++){
       if(x-i<0||y-i<0)break;
       else if(a[x-i][y-i]=='o')continue;
       else if(a[x-i][y-i]!='x')break;
       else {a[x-i][y-i] = 'o';cnt++;}
    }
    for(int i=1;i<8;i++){
       if(x+i>7||y+i>7)break;
       else if(a[x+i][y+i]=='o')continue;
       else if(a[x+i][y+i]!='x')break;
       else {a[x+i][y+i] = 'o';cnt++;}
    }
    for(int i=1;i<8;i++){
       if(x-i<0||y+i>7)break;
       else if(a[x-i][y+i]=='o')continue;
       else if(a[x-i][y+i]!='x')break;
       else {a[x-i][y+i] = 'o';cnt++;}
    }
    for(int i=1;i<8;i++){
       if(x+i>7||y-i<0)break;
       else if(a[x+i][y-i]=='o')continue;
       else if(a[x+i][y-i]!='x')break;
       else {a[x+i][y-i] = 'o';cnt++;}
    }
}
void Kmove(int x, int y){
       if(x>0&&a[x-1][y]=='x'){a[x-1][y] = 'o';cnt++;}
       if(x<7&&a[x+1][y]=='x'){a[x+1][y] = 'o';cnt++;}
       if(y>0&&a[x][y-1]=='x'){a[x][y-1] = 'o';cnt++;}
       if(y<7&&a[x][y+1]=='x'){a[x][y+1] = 'o';cnt++;}
       if(x>0&&y>0&&a[x-1][y-1]=='x'){a[x-1][y-1] = 'o';cnt++;}
       if(x<7&&y<7&&a[x+1][y+1]=='x'){a[x+1][y+1] = 'o';cnt++;}
       if(x>0&&y<7&&a[x-1][y+1]=='x'){a[x-1][y+1] = 'o';cnt++;}
       if(x<7&&y>0&&a[x+1][y-1]=='x'){a[x+1][y-1] = 'o';cnt++;}
}
void Pmove(int x, int y){
       if(x>0&&y>0&&a[x-1][y-1]=='x'){a[x-1][y-1] = 'o';cnt++;}
       if(x>0&&y<7&&a[x-1][y+1]=='x'){a[x-1][y+1] = 'o';cnt++;}
}
void pmove(int x, int y){
       if(x<7&&y<7&&a[x+1][y+1]=='x'){a[x+1][y+1] = 'o';cnt++;}
       if(x<7&&y>0&&a[x+1][y-1]=='x'){a[x+1][y-1] = 'o';cnt++;}
}
void Nmove(int x, int y){
       if(x>1&&y<7&&a[x-2][y+1]=='x'){a[x-2][y+1] = 'o';cnt++;}
       if(x>1&&y>0&&a[x-2][y-1]=='x'){a[x-2][y-1] = 'o';cnt++;}
       if(x<6&&y<7&&a[x+2][y+1]=='x'){a[x+2][y+1] = 'o';cnt++;}
       if(x<6&&y>0&&a[x+2][y-1]=='x'){a[x+2][y-1] = 'o';cnt++;}
       if(x>0&&y<6&&a[x-1][y+2]=='x'){a[x-1][y+2] = 'o';cnt++;}
       if(x>0&&y>1&&a[x-1][y-2]=='x'){a[x-1][y-2] = 'o';cnt++;}
       if(x<7&&y<6&&a[x+1][y+2]=='x'){a[x+1][y+2] = 'o';cnt++;}
       if(x<7&&y>1&&a[x+1][y-2]=='x'){a[x+1][y-2] = 'o';cnt++;}
}
int main(){
    int i,j,k;

    freopen("in.txt","r",stdin);
    while(scanf("%s",s)==1){
        memset(a,'x',sizeof a);
        cnt = 0;
        k = -1;
        for(i=0;i<8;i++){
            for(j=0;j<8;j++){
                k++;
                if(s[k]=='/'){j=j-1;}
                else if(isdigit(s[k]))j=j+s[k]-'1';
                else if(isalpha(s[k])){a[i][j]=s[k];cnt++;}
            }
            a[i][j]='\0';
            puts(a[i]);
        }
        for(i=0;i<8;i++){
            for(j=0;j<8;j++){
                if(a[i][j]=='K'||a[i][j]=='k') {Kmove(i,j);}
                else if(a[i][j]=='Q'||a[i][j]=='q') {Qmove(i,j);}
                else if(a[i][j]=='R'||a[i][j]=='r') {Rmove(i,j);}
                else if(a[i][j]=='N'||a[i][j]=='n') {Nmove(i,j);}
                else if(a[i][j]=='B'||a[i][j]=='b') {Bmove(i,j);}
                else if(a[i][j]=='P') {Pmove(i,j);}
                else if(a[i][j]=='p') {pmove(i,j);}

            }
        }
        printf("%d\n",64-cnt);
        for(i=0;i<8;i++){
            puts(a[i]);
        }
        puts("");
    }

 return 0;
}
