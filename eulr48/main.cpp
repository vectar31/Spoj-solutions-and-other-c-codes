#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll mod=10000000007;
ll modular_pow(ll base, ll exponent)
{
    ll result = 1;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            result = ((result%mod) * (base%mod)) % mod;
        exponent = exponent >> 1;
        base = ((base%mod) * (base%mod)) % mod;
    }
    return result%mod;
}
int main()
{
    //cout<<mod<<endl;
    ll n;
    cin>>n;
    ll ans=0;
    for(ll i=1;i<=n;i++)
    {
        ll temp=(modular_pow(i,i))%mod;
        cout<<i<<" "<<temp<<endl;
        ans=(ans%mod + temp%mod)%mod;
    }
    cout<<ans<<endl;
    return 0;
}
