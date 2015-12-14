#include <iostream>
#include <cmath>
#include <climits>
#define ll long long
using namespace std;
ll a[300001];
int main()
{
    ll n,m;
    cin>>n>>m;
    for(ll i=0;i<n;i++)
        cin>>a[i];
    int l=0;
    ll ans=0,sum=0;
    for(int i = 0; i < n; i++)
    {
        sum+=a[i];
        while(sum>m)
        {
            sum-=a[l];
            l++;
        }
        if(sum>ans)
            ans=sum;
    }
    cout<<ans<<endl;
    return 0;
}
