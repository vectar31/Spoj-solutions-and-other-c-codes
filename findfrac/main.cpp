#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a,ll b)
{
    if(a==0)
        return b;
    return gcd(b%a,a);
}
ll lcm(ll a , ll b)
{
    ll pro=a*b;
    ll res= pro/gcd(a,b);
    return res;
}
int main()
{
    ll a, b, c, d;
    while(cin>>a>>b>>c>>d)
    {

        ll den=lcm(b,d);
        a=a*den/b;
        c=c*den/d;
        b=den;
        d=den;
        ll num_ans,den_ans=den;
        for(ll i=a+1;i<b;i++)
        {
            ll temp=gcd(i,den);
            if(den/temp<den_ans)
            {
                num_ans=i/temp;
                den_ans=den/temp;
            }

        }
        cout<<num_ans<<"/"<<den_ans<<endl;
    }
    return 0;
}
