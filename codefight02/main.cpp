#include <iostream>
#define ll long long
#define M 1000000007
using namespace std;
ll ncr(int n,int k)
{
    ll res=1;
    if(k>n-k)
        k=n-k;
    for(int i=0;i<k;i++)
    {
        res*=(n-i);
        res/=(i+1);
    }
    return res;
}
ll catlan(int n)
{
    if (n==0)
        return 1;
    if(n==1)
        return 1;
    ll c=ncr(2*n,n);
    ll ans=c/(n+1);
    return ans;
}
int sum(ll n)
{
    int s=0;
    while(n!=0)
    {
        s+=(n%10);
        n/=10;
    }
    return s;
}
int main()
{
    while(1)

    {int i;cin>>i;cout<<sum(catlan(i))<<endl;}
    return 0;
}
