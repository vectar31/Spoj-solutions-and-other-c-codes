#include <iostream>
#define MAXN 100001
#define in unsigned long long int
using namespace std;
in ncr(in n, in k )
{
    in res=1;
    if(k>n-k) k=n-k;
    for(in i=0;i<k;++i)
    {
        res*=(n-i);
        res/=(i+1);
    }
    return res;
}
int main()
{
	int t;
	in n, r;
	cin>>t;
	while(t--)
	{
		cin>>n>>r;
		cout<<ncr(n-1,r-1)<<endl;
	}
	return 0;
}
