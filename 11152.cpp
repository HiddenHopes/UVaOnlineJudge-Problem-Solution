#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,Pi;
    double Cir, Tri, cir;
    double r, R, s;
    Pi = acos(-1);
    while(cin>>a>>b>>c){
        s = (a+b+c)/2.0;
        Tri =sqrt(s*(s-a)*(s-b)*(s-c));
        r = Tri/s;
        R =(a*b*c)/sqrt((a+b+c)*(b+c-a)*(c+a-b)*(a+b-c));
        cir = Pi*r*r;
        Cir = Pi*R*R-Tri;
        Tri = Tri-cir;
        cout<<fixed<<setprecision(4);
        cout<<Cir<<" "<<Tri<<" "<<cir<<endl;
    }
    return 0;
}
