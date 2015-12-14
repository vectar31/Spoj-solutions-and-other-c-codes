#include <bits/stdc++.h>
#define ll long long
#define N 85
#define M 40000000000000000
using namespace std;
ll a[N],s[N];
int main()
{
    a[0]=0;a[1]=1;a[2]=2;
    s[0]=0;s[1]=0;s[2]=2;
    for(int i=3; ;i++)
    {
        a[i]=a[i-1]+a[i-2];
        if(a[i]%2==0)
            s[i]=s[i-1]+a[i];
        else
            s[i]=s[i-1];
        if(a[i]>M)
        {
            //cout<<i<<endl;
            break;
        }
    }
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans=0;
        for(int i=0; ;i++)
        {
            if(a[i]<=n)
                ans=s[i];
            else
                break;
        }
        cout<<ans<<endl;
    }

    return 0;
}
