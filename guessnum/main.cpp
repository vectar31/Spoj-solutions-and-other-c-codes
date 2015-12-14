#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a,ll b)
{
    while(b)
        b^=a^=b^=a%=b;
    return a;
}
ll lcm(ll a, ll b)
{
    ll ans=(a*b)/gcd(a,b);
    return ans;
}
int main()
{
    string s;
    cin>>s;
    while(s!="*")
    {
        ll n=s.length();
        bool a[n+1];
        memset(a,false,sizeof a);
        for(ll i=0;i<n;i++)
            if(s[i]=='Y')
                a[i+1]=true;
        ll ans=1;
        for(ll i=1;i<=n;i++)
        {
            //cout<<a[i]<<endl;
            if(a[i])
                ans=lcm(ans,i);
            cout<<i<<" "<<ans<<endl;
        }
        for(ll i=1;i<=n;i++)
        {
            if(!a[i] && ans%i==0)
            {
                ans=-1;
                break;
            }
        }
        cout<<ans<<endl;
        cin>>s;
    }
    return 0;
}
