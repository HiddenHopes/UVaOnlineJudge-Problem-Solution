#include <bits/stdc++.h>
using namespace std;
int a[104],t;
void flip(int pos){
    int k=pos;
    for(int i=0;i<=pos/2;i++){
        swap(a[i],a[k--]);
    }

}

int main ()
{
    freopen("in.txt","r",stdin);

    char str[10000];
    char * pch;

    while(gets(str))
    {
        t = 0;
        pch = strtok (str," ,.-");
        while (pch != NULL)
        {
            sscanf(pch,"%d",&a[t++]);
            printf("%d ",a[t-1]);
            pch = strtok (NULL, " ,.-");
        }
        printf("\n");

        int total = t-1;
        int T = t;
        for(int i = 0; i < total; i++)
        {
            int p = 0, mx = 0;
            for(int j = 0; j < T; j++){
                if(a[j]>mx) {mx = a[j]; p=j;}
            }
            if(p==T-1) ;
            else{
                if(p!=0){
                    flip(p);
                    printf("%d ",t-p);
                }
                flip(T-1);
                printf("%d ",t-T+1);
            }
            T--;
        }
        printf("0\n");

    }
    return 0;
}
