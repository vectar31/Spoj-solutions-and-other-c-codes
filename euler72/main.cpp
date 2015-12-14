#include <bits/stdc++.h>
#define ll long long
#define N 1000001
int p[N];
ll ans[N]={0};
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
    for(int i=0;i<N;i++)
        p[i]=phi(i);
    ans[0]=0;ans[1]=0;
    for(int i=2;i<N;i++)
        ans[i]=ans[i-1]+p[i];
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        printf("%lld\n",ans[n]);
    }
    return 0;
}
