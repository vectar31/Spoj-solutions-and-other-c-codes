#include <bits/stdc++.h>
#define max(a,b) (a>b)?a:b
using namespace std;
int w[501],v[501],n,W;
int ans[2][2000001];
int knapsack()
{
    ans[0][0]=ans[1][0]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=W;j++)
        {
                if(j>=w[i])
                ans[(i&1)][j]=max(ans[!(i&1)][j],(ans[!(i&1)][j-w[i]]+v[i]));
                else
                ans[(i&1)][j]=ans[!(i&1)][j];
        }
    }
    if(n%2==0)
    return ans[0][W];
    else
        return ans[1][W];
}
int main()
{
    scanf("%d%d",&W,&n);
    for(int i=1;i<=n;i++)
        scanf("%d%d",&v[i],&w[i]);
    printf("%d\n",knapsack());
    return 0;
}
