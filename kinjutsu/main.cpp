#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,p,p2,ans,d=0;
        cin>>p>>n;
        if(n==0||p<n)
            cout<<p<<endl;
        ans=p;p2=p/2;
        if(n>=p2)
        {
            n=p2;
            d=0;
        }
        else
        {
            if(n!=1)
                d=(2*((p2-n)/(n*(n-1))));
        }
        ll q,s;
        if(n&1)
        {
            q=n-n/2;
            s=(q*((2+(q-1)*2*d)/2));
            ans-=s;
            ans+=(1+(n-1)*d);
        }
        else
        {
            q=n/2;
            s=q*(2+(q-1)*2*d)/2;
            ans-=s;
        }
        if(n==1)
            ans=p;
        cout<<ans<<endl;
    }
    return 0;
}
