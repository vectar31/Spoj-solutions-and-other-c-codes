#include <iostream>
#define ll long long
using namespace std;
ll a,b,x,y,k,ans=0;
int sum(ll n)
{
    int s=0;
    while(n!=0)
    {
        s+=(n%10);
        if(s>y)
            break;
        n/=10;
    }
    return s;
}
int main()
{
    cin>>a>>b>>x>>y>>k;
    ll aa=9;
    while(sum(aa)<x)
        aa=aa*10+9;
    aa/=10;
    if(a<aa)
        a=aa;
    if(a%k!=0)
    a=a+k-(a%k);
    for(ll i=a;i<=b;i+=k)
    {
        int s=sum(i);
        if(s>=x&&s<=y)
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}
