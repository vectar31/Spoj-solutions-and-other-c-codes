#include <iostream>
#define ll long long int
#define m 1000000003
using namespace std;
int bc(int n, int k)
{
    if(k>n)
        return 0;
    if(k>n-k)
        k=n-k;
    ll res=1;
    for(int i=0;i<k;i++)
    {
        res=(((res))*(n-i));//cout<<res<<" ";
        res/=(i+1);//cout<<res<<endl;
    }
    //cout<<res<<endl;
    return res;
}
int main()
{
    int n,k;
    cin>>n>>k;
    if(n<(2*k))
        cout<<0<<endl;
    else
    {
        cout<<bc( n-k+1 , k)<<endl;
        cout<<bc(n-k-1 , k-2 )<<endl;
        ll ans=((bc( n-k+1 , k)%m) - (bc( n-k-1 , k - 2 )%m))%m;
        cout<<ans<<endl;
    }
    return 0;
}
