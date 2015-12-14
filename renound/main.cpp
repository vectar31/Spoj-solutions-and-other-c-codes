#include <cstdio>
#include <cmath>
#include <iostream>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        ll x, y, z,temp, temprt, a, b;
		cin>>x>>y>>z;
		temp=x*x + y*y + 2*y*z;
		temprt=(long long)(sqrt((double)temp));
		if(temprt*temprt!=temp)
            cout<<"Not this time."<<endl;
		else
		{
			a = 2*x*z + 2*z*temprt;
			b = 2*y + 4*z;
			if(a % b)
                cout<<"Not this time."<<endl;
			else
                {
                    ll ans=a/b;
                    cout<<ans<<endl;
                }
		}
	}
	return 0;
}
