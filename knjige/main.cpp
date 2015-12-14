#include <bits/stdc++.h>
#define in(n) scanf("%d",&n)
using namespace std;

int main()
{
    int n;
    in(n);
    int a[n];
    for(int i=0;i<n;i++)
        in(a[i]);
    /* METHOD 1
    int ans=n;
    for(int i=n-1;i>=0;i--)
        if(a[i]==ans)
            ans-=1;*/
    // METHOD 2
    int ans=0;
    int j=n-1,b[n];
    for(int i=0;i<n;i++)
        b[i]=a[i];
    sort(b,b+n);
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==b[j])
            j--;
        else
            ans++;
    }
    printf("%d\n",ans);
    return 0;
}
