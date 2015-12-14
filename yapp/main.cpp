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
            int n;
            cin>>n;
            n-=1;
            ll ans=1;
            ll temp=2;
            while(n!=0)
            {
                if(n%2!=0)
                    ans = (ans * temp) % M;
                temp = (temp * temp) % M;
                n/=2;
            }
            cout<<ans<<endl;
        }
        return 0;
}
