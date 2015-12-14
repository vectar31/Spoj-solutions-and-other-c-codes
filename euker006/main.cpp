#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll a=n*(n+1);
        //a*=a;
        ll b=(3*n*n)-n-2;

        ll ans=(a*b)/12;
        cout<<ans<<endl;
    }
    return 0;
}
