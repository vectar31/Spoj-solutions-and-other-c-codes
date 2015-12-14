#include <iostream>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        if(n==0)
            cout<<"0 1"<<endl;
        else
        {
            ll temp,ans=1;
            temp=n;
            while(temp!=0)
            {
                ans*=((temp&1)+1);
                temp/=2;
            }
            ll ans1=n+1-ans;
            cout<<ans1<<" "<<ans<<endl;
        }
    }
    return 0;
}
