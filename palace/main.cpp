#include <iostream>
using namespace std;
int main()
{
	int t, p[250], i, n;
	p[0] = 1;
	for(i=1; i<204; i++)
		p[i] = (p[i-1]<<1) % 98777;
	cin>>t;
	while(t--)
	{
		cin>>n;
		n--;
		cout<<p[((n%204)*(n%204))%204]<<endl;
	}
	return 0;
}
