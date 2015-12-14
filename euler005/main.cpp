#include <bits/stdc++.h>
#define ll long long
#define N 41
using namespace std;
ll a[N];
ll gcd(ll a , ll b)
{
    while(b)
        b^=a^=b^=a%=b;
    return a;
}
ll lcm(ll a , ll b)
{
    ll ans=a*b;
    ans=ans/(gcd(a,b));
    return ans;
}
int main()
{
    int ans=1;
    for(int i=1;i<N;i++)
    {
        ans=lcm(ans,i);
        a[i]=ans;
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<a[n]<<endl;
    }
    return 0;
}
