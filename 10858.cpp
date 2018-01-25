#include<bits/stdc++.h>
using namespace std;

vector<vector<int> >all;
vector<int>divs;

void factors(int n,int d){
    int root = sqrt(double(n))+0.5;
    for(int i=d;i<=root;i++){
        if(n%i==0){
            divs.push_back(i);
            factors(n/i, i);
            divs.pop_back();
        }
    }
    divs.push_back(n);
    all.push_back(divs);
    divs.pop_back();
}

int main()
{
    //freopen("in.txt","r",stdin);
    int n,i,j;
    while (scanf("%d", &n)==1&&n){
        all.clear();
        factors(n,2);
        printf("%d\n",all.size()-1);
        for(i = 0; i < all.size()-1; i++){
            for(j = 0; j < all[i].size()-1; j++){
                printf("%d ", all[i][j]);
            }
            printf("%d\n", all[i][j]);
        }
    }
    return 0;
}
