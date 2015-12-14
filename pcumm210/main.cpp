#include <iostream>

#include <cstdio>
#define ll long long int
#define N 1000010
#define M 1000000003
using namespace std;
long long int a[1000010];
int main()
{
    a[0]=0;
    ll temp=0;
    for(long long int i=1;i<N;i++)
    {
            temp=(temp+ (i*i*i))%M;
            a[i]= (a[i-1] + temp)%M;
    }
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        printf("%lld\n", a[n]);
    }
    return 0;
}
