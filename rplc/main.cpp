#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        ll n,a;
        cin>>n;
        ll ans=0;ll life = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            life+=a;
            if(life<1 && ans < 1-life )
                ans=1-life;
        }
        if(ans==0)
            ans=1;
        cout<<"Scenario #"<<j<<": "<<ans<<endl;
    }
    return 0;
}
