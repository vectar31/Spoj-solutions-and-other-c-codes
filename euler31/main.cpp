#include <bits/stdc++.h>
#define ll long long
#define N 100001
#define M 1000000007
using namespace std;
ll ans[N]={0};
int coins[]={ 1, 2, 5, 10, 20, 50, 100, 200 };
int main()
{
    ans[0]=1;
    for(int i=0;i<8;i++)
    {
        for(int j=coins[i];j<N;j++)
            ans[j]=((ans[j]%M) + (ans[j-coins[i]]%M))%M;
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
