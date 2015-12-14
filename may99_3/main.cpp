#include <iostream>
using namespace std;
int gcd(int a, int b)
{
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}

int main()
{
	int x,y,z;
	int t;
	cin>>t;
	while(t--)
	{
        cin>>x>>y>>z;
        if(z>y && z>x)
            cout<<"NO"<<endl;
        else if(x>y)
        {
            if(z%gcd(x,y) == 0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
        {
            if(z%gcd(y,x) == 0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
	}
	return 0;
}
