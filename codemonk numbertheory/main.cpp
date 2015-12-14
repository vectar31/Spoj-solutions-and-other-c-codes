#include <iostream>
#include <cstdio>
#include <map>
#include <algorithm>

#define ll long long
#define N 1000001
ll m=1000000007;
using namespace std;
ll modexp( int a , int b )
{
    ll res=1,y=a;
    while(b>0)
    {
        if(b&1)
            res=((res%m)*(y%m))%m;
        y=((y%m)*(y%m))%m;
        b/=2;
    }
    return res;
}
int gcd (int a ,int b)
{
    while(b)
        b^=a^=b^=a%=b;
    return a;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll g=a[0];
    for(int i=0;i<n;i++)
        g=gcd(g,a[i]);
    ll ans=1;
    for(int i=0;i<n;i++)
    {
        ans= ((ans%m) *  (modexp(a[i],g)%m))%m;
    }
    cout<<ans<<endl;
    return 0;
}
