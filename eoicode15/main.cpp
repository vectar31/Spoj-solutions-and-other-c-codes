#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a[1000001];
ll rate[1000001];
int main()
{
    int n,x;
    ll p;
    cin>>n>>p>>x;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
       rate[i]=p*a[i];
       p-=x;
    }
    ll maxrate=0,ans=0;
    for(int i=0;i<n;i++)
    {
        if(maxrate<rate[i])
        {
            maxrate=rate[i];
            ans=i+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
