#include <iostream>
#include <cstdio>
#include <algorithm>
#define N 1000001
using namespace std;
int a[N];
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    int k;
    cin>>k;
    int ans=0,ans2=0;
    for(int i=0;i<n;i++)
    {
        if(i<k)
        {
            if(ans<a[i])
                ans=a[i];
        }
        else
        {
            printf("%d ",ans);
            if(a[i-k]==ans)
                {
                    ans=a[i-k+1];
                    for(int j=i-k+1;j<i;j++)
                        if(ans<a[j])
                        ans=a[j];
                }
            if(a[i]>ans)
                ans=a[i];
        }
    }
    printf("%d\n",ans);
    return 0;
}
