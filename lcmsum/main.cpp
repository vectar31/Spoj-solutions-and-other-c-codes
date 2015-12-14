#include <iostream>
#define ll long long
#define N 1000001
using namespace std;
int ph[N];
ll sumphi[N]={0};
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
    sumphi[0]=0;
    ll sum=0;
    for(int i=1;i<N;i++)
    {
        ph[i]=phi(i);
        sum+=ph[i];
        sumphi[i]=sum;
    }

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
    }
    return 0;
}
