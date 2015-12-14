#include <iostream>
#include <algorithm>
#include <cstdio>
#define ll long long
using namespace std;
bool prime (int n)
{
    if(n==1)
        return false;
    if(n==2)
        return true;
    if(n%2==0)
        return false;
    for(int i=3;i*i<=n;i+=2)
        if(n%i==0)
        return false;
    return true;
}
ll x[1000000];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        int ans=0;
        if(n%2!=0)
            cout<<0<<endl;
        else
        {
            n/=2;
            for(int i=1;i*i<=n;i++)
            {
                if(n%i==0)
                {
                    if(!prime(i))
                        x[ans++]=i;
                    if(!prime(n/i) && i!=n/i)
                        x[ans++]=n/i;
                }
            }
            sort(x,x+ans);
        cout<<ans<<" ";
        if(ans!=0)
        {
        for(int i=0;i<ans;i++)
            cout<<x[i]<<" ";}
        cout<<endl;

        }
    }
    return 0;
}
