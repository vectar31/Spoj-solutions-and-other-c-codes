#include <bits/stdc++.h>
#define ll long long
#define N 30000001
using namespace std;
bool checktri(ll a)
{
    ll s=1+(8*a);
    ll sq=sqrt(s);
    if(sq*sq==s && sq&1 )
        return true;
    return false;
}
bool checkpent(ll a)
{
    ll s=1+(24*a);
    ll sq=sqrt(s);
    if(sq*sq==s)
        if((sq+1)%6==0)
            return true;
    return false;
}
int main()
{
    ll n;
    int a,b;
    cin>>n>>a>>b;
    if(a==3)
    {
        for(ll i=1;(i*(3*i-1)/2)<n;i++)
        {
            ll p=(i*(3*i-1)/2);
            if(checktri(p))
                cout<<p<<endl;
        }
    }
    else
    {
        for(ll i=1;(i*(2*i-1))<n;i++)
        {
            ll h=(i*(2*i-1));
            if(checkpent(h))
                cout<<h<<endl;
        }
    }
    return 0;
}
