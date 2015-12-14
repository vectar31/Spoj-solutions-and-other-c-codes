#include <iostream>
#include <cstdio>
#include <cmath>
#define ll long long
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        ll n;
        cin>>n;
        ll ans=0;
        if(n<3)
            ans=0;
        else
        {
            ll temp=sqrt(n);
            while(1)
            {
                if(temp*(temp+2)<=n)
                {
                    ans=temp;
                    break;
                }
                else
                    temp--;
            }
        }
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
    return 0;
}
