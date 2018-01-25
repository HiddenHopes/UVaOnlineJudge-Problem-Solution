#include <bits/stdc++.h>
using namespace std;
#define E 2.71828182846
#define PI 3.14159265359
long long findDigits(int n)
{
	if (n < 0)
		return 0;

	if (n <= 1)
		return 1;

	double x = ((n*log10(n/E)+log10(2*PI*n)/2.0));

	return floor(x)+1;
}

int main()
{
    int t,n;
    cin>>t;
	while(t--){
        cin>>n;
        cout << findDigits(n) << endl;
	}
	return 0;
}
