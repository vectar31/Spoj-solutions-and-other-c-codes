#include <iostream>
#define ll long long
using namespace std;
int phi[10002];
ll sum[10002];
int calphi(int n)
{
    int res=n;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
                n/=i;
            res-=(res/i);
        }
    }
    if(n>1)
        res-=(res/n);
    return res;
}
int main()
{
    phi[0]=0;
    phi[1]=phi[2]=1;
    phi[3]=2;
    sum[0]=0;
    sum[1]=1;
    sum[2]=2;
    sum[3]=4;
    for(int i=4;i<=10000;i++)
    {
        phi[i]=calphi(i);
        sum[i]=phi[i]+sum[i-1];
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll ans=sum[n]*sum[n];
        cout<<ans<<endl;
    }
    return 0;
}
