#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll n8=8*n+1;
        ll temp=sqrt(n8);
        if(temp*temp==n8)
        {
            if(temp&1)
            {
                ll ans=(temp-1)/2;
                cout<<ans<<endl;
            }
            else
                cout<<-1<<endl;
        }
        else
            cout<<-1<<endl;
    }
    return 0;
}
