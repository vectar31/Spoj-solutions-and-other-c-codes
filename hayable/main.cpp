#include <iostream>
#include <cstdio>
#include <algorithm>
#define N 1000001
using namespace std;
int a[N],ans[N];
int main()
{
    int n,u;
    scanf("%d%d",&n,&u);
    int l,r;
    for(int i=0;i<=n;i++)
        a[i]=0;
    for(int i=0;i<u;i++)
    {
        scanf("%d%d",&l,&r);
        a[l]+=1;
        a[r+1]-=1;
    }
    int res=0;
    for(int i=0;i<n;i++)
    {
        res+=a[i];
        ans[i]=res;
    }
    sort(ans,ans+n);
    printf("%d\n",ans[n/2]);
    return 0;
}
