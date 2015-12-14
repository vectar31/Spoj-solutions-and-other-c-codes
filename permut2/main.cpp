#include <iostream>
using namespace std;
int main()
{
	int a[100001],n,i,c;
	cin>>n;
	while(n!=0)
	{
		for(i=0; i<n; i++)
            cin>>a[i];
		for(i=0,c=0; i<n; i++)
			if(a[a[i]-1]==i+1)
				c++;
		if(c==n)
		cout<<"ambiguous"<<endl;
		else
		cout<<"not ambiguous"<<endl;

		cin>>n;
	}
	return 0;
}
