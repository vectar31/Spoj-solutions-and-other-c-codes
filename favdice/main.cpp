#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		double s=0.0;
		int n,i;
		cin >> n;
		for (i=1; i<=n; i++)
			s+=n/(double)i;
		printf("%.2f\n",float(s));
	}
	return 0;
}
