#include <iostream>
#define ll long long
using namespace std;
ll sum(ll n)
{
    ll ans=0;
    while(n!=0)
    {
        ans+=(n%10);n/=10;
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        while(n%sum(n)!=0)
            n++;
        cout<<n<<endl;
    }
    return 0;
}
