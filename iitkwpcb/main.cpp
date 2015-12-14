#include <iostream>
#define ll long long
using namespace std;
bool gcd(ll a,ll b)
{
    while(b)
    b^=a^=b^=a%=b;
    return a==1;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        for(ll i=n/2;i>=1;i--)
        {
            if(gcd(n,i))
            {
                cout<<i<<endl;
                break;
            }
        }

    }
    return 0;
}
