#include<bits/stdc++.h>
using namespace std;

long long int n,cnt,a[1000002],b[1000002];

void merge(long long int,long long int,long long int);
void merge_sort(long long int low,long long int high){
    long long int mid;
    if(low<high){
        mid = low + (high-low)/2;
        merge_sort(low,mid);
        merge_sort(mid+1,high);
        merge(low,mid,high);
    }
}
void merge(long long int low,long long int mid,long long int high){
    long long int h,i,j,k;
    h=low;
    i=low;
    j=mid+1;

    while((h<=mid)&&(j<=high)){
        if(a[h]<=a[j]){
            b[i]=a[h];
            h++;

        } else{
            b[i]=a[j];
            j++;
            cnt+=high-h+1;
        }
        i++;
    }
    if(h>mid){
        for(k=j;k<=high;k++){
            b[i]=a[k];
            i++;
        }
    } else{
        for(k=h;k<=mid;k++){
            b[i]=a[k];
            i++;
        }
    }
    for(k=low;k<=high;k++) a[k]=b[k];
}

int main(){
    freopen("in.txt","r",stdin);//freopen("out.txt","w",stdout);
    while(scanf("%lld\n",&n)==1){
        cnt=0;
        for(int i=1; i<=n; i++){
            cin>>a[i];
        }
        merge_sort(1,n);
        cout<<cnt<<endl;
    }
    return 0;
}
