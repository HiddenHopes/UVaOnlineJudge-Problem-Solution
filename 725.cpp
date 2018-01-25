#include<bits/stdc++.h>
using namespace std;
#define N 9
#define R 4

void permute(int k,int n);
int place(int k,int i);
int x[R+1];
int y[R+1];
int a,denominator, numerator;
int visited[10];
bool flag;
bool check(){
    for(int i=0; i<=9; i++){
        visited[i]=0;
    }
    visited[x[0]]=1;
    visited[x[1]]=1;
    visited[x[2]]=1;
    visited[x[3]]=1;
    visited[x[4]]=1;
    int p = numerator;
    for(int i=0; i<=4; i++){
        y[i] = p%10;  p/=10;
        if(visited[y[i]]==1) return false;
        visited[y[i]]=1;
    }
    return true;
}

void permute(int k,int n)
{
  int i;
  for(i=0;i<=n;i++)
  {
    if(place(k,i)==1)
    {     x[k]=i;
            if(k==R)
            {
                denominator = 10000*x[0]+1000*x[1]+100*x[2]+10*x[3]+x[4];
                numerator = denominator*a;
                if(numerator>98765) return;
                if(check()){
                    printf("%05d / %05d = %d\n",numerator, denominator, a);
                    flag = true;
                }

            }
            else
                permute(k+1,n);
    }
  }
}

int place(int k, int i)
{
  int j;
  for(j=0;j<k;j++)
  {
    if(x[j]==i)
        return 0;

  }
  return 1;
}

int main()
{
    int t = 1 ;
    while(scanf("%d",&a)==1&&a!=0){
        if(t>1) printf("\n");
        flag = false;
        permute(0,N);
        if(flag==false) printf("There are no solutions for %d.\n",a);
        t++;
    }
    return 0;
}


