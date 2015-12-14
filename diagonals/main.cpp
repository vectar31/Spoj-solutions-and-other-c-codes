#include <iostream>
#define ll long long
#define M 1000000007
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a;
        ll b;
        b=((n*(n-1)*(n-2)*(n-3))/24)%M;
        cout<<b<<endl;
    }
    return 0;
}
