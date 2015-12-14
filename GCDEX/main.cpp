#include <bits/stdc++.h>
#define ll long long
using namespace std;
int phi[1000010];
ll a[1000010];
void euler_sieve()
{
    phi[1] = 1;
    for(int i=2; i<1000000; i++)
    {
        if(!phi[i])
        {
            phi[i] = i-1;
            for(int j=(i<<1); j<=1000000; j+=i)
            {
                if(!phi[j])
                    phi[j] = j;
                phi[j] = phi[j]/i*(i-1);
            }
        }
    }
}
int main()
{
    euler_sieve();
    for(int i=1;i<=1000000;++i)
        a[i]=phi[i];
    for(int i=2;i<=1000000;++i)
        for(int j=2;i*j<=1000000;++j)
            a[i*j]+=phi[i]*j;
    for(int i=2;i<=1000000;++i)
        a[i]+=a[i-1];
    int n;
    while(scanf("%d",&n),n!=0)
 		printf("%llu\n",a[n]-1);
    return 0;
}
