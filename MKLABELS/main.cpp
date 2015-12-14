#include <iostream>
#include  <cstdio>
using namespace std;
int ans[]={0,1,1,3,16,125,1296,16807,262144,4782969,100000000};
int main()
{
	int n,t=1;
	cin>>n;
	while(n!=0)
		{printf("Case %d, N = %d, # of different labelings = %d\n",t++,n,ans[n]);cin>>n;}

	return 0;
}
