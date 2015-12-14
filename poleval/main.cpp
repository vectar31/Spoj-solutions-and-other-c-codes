#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin>>n;
    int t=1;
    while(n!=-1)
    {
        int c[n+1];
        for(int i=0;i<=n;i++)
            cin>>c[i];
        int k,x;
        cin>>k;
        cout<<"Case "<<t++<<":"<<endl;
        while(k--)
        {
            cin>>x;
            ll ans=c[0];
            for(int i=1;i<=n;i++)
            {
                ll temp=c[i];
                ans=(ans*x)+temp;
            }
            cout<<ans<<endl;
        }
        cin>>n;
    }
    return 0;
}
