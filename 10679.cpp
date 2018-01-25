#include <cstdio>
#include <cstring>
#include <time.h>
using namespace std;

#define MAX_N 100010
int indx;
char T[MAX_N], P[MAX_N];
int b[MAX_N], n, m;

void kmpPreprocess(){
    int i = 0, j = -1;
    b[0] = -1;
    while (i < m){
        while (j >= 0 && P[i] != P[j]) j = b[j];
        i++;
        j++;
        b[i] = j;
    }
}

void kmpSearch(){
    int i = 0, j = 0;
    while (i < n){
        while (j >= 0 && T[i] != P[j]) j = b[j];
        i++;
        j++;
        if (j == m){
            indx = i - j;
            j = b[j];
        }
    }
}

int main()
{
    int t,q;
    freopen("in.txt","r",stdin);
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s", T);
        scanf("%d",&q);
        while(q--)
        {
            indx = -9;
            scanf("%s", P);
            n = (int)strlen(T);
            m = (int)strlen(P);

            kmpPreprocess();
            kmpSearch();
            if(indx!=-9)
            {
                printf("y\n");
                indx = -9;
            }
            else printf("n\n");
        }
    }

    return 0;
}
