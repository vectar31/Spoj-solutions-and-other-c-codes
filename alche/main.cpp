#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	int t, n;
	cin>>t;
	while(t--)
    {
		cin>>n;
		cout<<(max(0, n-2))<<endl;
	}
	return 0;
}
