#include <bits/stdc++.h>
#define ll long long
#define N 40001
#define M 1000000007
using namespace std;
ll ans[N]={0};
int main()
{
    ans[0]=1;
    for(int i=1;i<N;i++)
    {
        for(int j=i;j<N;j++)
            ans[j]=((ans[j]%M) + (ans[j-i]%M))%M;
    }
    //cout<<ans[7]<<endl;
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
