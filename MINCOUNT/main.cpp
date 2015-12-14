#include <iostream>
using namespace std;

int main()
{
	long long n,k;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n==0)
        {
            cout<<"0"<<endl;
            continue;
        }
		k =(n-1)/3;
		n=(3*k*(k+1))/2 + ((n-1)%3) * (k+1);
		cout<<n<<endl;;
	}
	return 0;
}
