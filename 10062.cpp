#include <bits/stdc++.h>
using namespace std;

char s[1005];

struct DT
{
    char ltr;
    int freq;
};

bool cmp(DT a, DT b)
{
    if(a.freq < b.freq) return true;
    else if(a.freq == b.freq and a.ltr > b.ltr) return true;

    return false;
}

int main()
{
    DT data[96];
    int t=0;
    while(gets(s)){
        if(t) printf("\n");
        t++;
        int len,k;
        for(int i=0; i<96; i++){
            data[i].freq = 0;
            data[i].ltr = char(i+32);
        }
    len = strlen(s);
    for(int i=0; i<len; i++)
    {
        data[s[i]-32].freq++;
        data[s[i]-32].ltr = s[i];
    }

    sort(data,data+96,cmp);
    for (int i=0; i<96; ++i)
        if(data[i].freq>0)printf("%d %d\n",data[i].ltr,data[i].freq);
}
    return 0;
}
