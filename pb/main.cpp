#include <iostream>
#define in long long
using namespace std;
in mul(in a, in b, in c)
{
    if (b==0)
        return 1;
	in ans=mul(a,b/2,c);
	ans=(ans*ans)%c;
	if (b%2)
        return (ans*a)%c;
    else
        return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n ;
        cin>>n;
        long long a=n+1,b=n-1;
        cout<<mul(a,b,10007)<<endl;

    }
    return 0;
}
