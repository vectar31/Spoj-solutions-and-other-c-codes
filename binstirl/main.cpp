#include<iostream>
using namespace std;
int main()
{
	long int t,n,m;
	cin>>t;
	while(t-->0)
	{
		cin>>n>>m;
		if((n-m)&(m-1)/2)
			cout<<"0"<<endl;
		else
            cout<<"1"<<endl;
	}
	return 0;
}
