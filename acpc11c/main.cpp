#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        ll ans=1e9;
        int p,q;
        for(int i=0;i<n;i++)
        {
            ans=1e9;
            q=sum-a[i]-p;
            ll temp = 2*min(p, q) + max(p, q);
            ans = min(ans, temp);
            p+=a[i];

        }

        cout<<ans<<endl;
    }
    return 0;
}
