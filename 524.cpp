#include <bits/stdc++.h>
using namespace std;
int prime[34]={0,0,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0};
int x[17];

int n;
bool check(){
    if(prime[x[1]+x[n]]==0) return false;
    for(int i=1; i<n; i++){
        if(prime[x[i]+x[i+1]]==0) return false;
    }
    return true;
}

void printboard(int n)
{
  int i;
  for(i=1;i<n;i++)
    printf("%d ",x[i]);
  printf("%d\n",x[n]);
}

int place(int k,int i)
{
  int j;
  for(j=2;j<k;j++)
  {
    if(x[j]==i)
        return 0;

  }
  return 1;
}


void permute(int k,int n)
{
  int i;
  for(i=2;i<=n;i++)
  {
    if(prime[x[k-1]+i]==1 && place(k,i)==1)
    {   x[k]=i;
        if(k==n)
        {
            if(check()){
                printboard(n);
            }
        }
        else
            permute(k+1,n);
    }
  }
}


int main()
{

    int k=1;
    x[1] = 1;
	while(cin>>n){
        if(k>1) cout<<"\n";
        cout << "Case " << k << ":\n";
        if(n==1)cout <<"1\n";
        else permute(2, n);
        k++;
	}
	return 0;
}
