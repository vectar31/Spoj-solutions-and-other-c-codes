#include <iostream>
#define ll long long
using namespace std;
int phi (int n) {
	int result = n;
	for (int i=2; i*i<=n; ++i)
		if (n % i == 0) {
			while (n % i == 0)
				n /= i;
			result -= result / i;
		}
	if (n > 1)
		result -= result / n;
	return result;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll ans=0,promax=0;;
        for(int i=1;i<=n;i++)
        {
            ll temp=phi(i);
            ll tempro=temp*i;
            if(tempro>promax)
            {
                ans=i;
                promax=tempro;
            }
        }

    }
    return 0;
}
