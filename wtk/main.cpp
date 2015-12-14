#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
	while(t--)
    {
        int n;
		cin>>n;
		int ans=0;
		for (int i=2;i<=n;i++)
			ans=(ans+n- i+1)%i;
        ans+=1;
		cout<<ans<<endl;
	}
	return 0;
}
