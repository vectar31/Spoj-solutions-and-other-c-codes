#include <bits/stdc++.h>
#define N 1000001
#define ll long long
using namespace std;
ll p[N];
int main()
{
    p[0]=0;
    for(ll i=1;i<N;i++)
        p[i]=i*(3*i-1)/2;
    int n,k;
    cin>>n>>k;
    int c=0;
    ll ans[n];
    for(int i=n;i>=k+1;i--)
    {
        ll a=p[i]-p[i-k];ll b=p[i]+p[i-k];
        if(binary_search(p,p+N,a)||binary_search(p,p+N,b))
            ans[c++]=p[i];

    }
    for(int i=c-1;i>=0;i--)
        cout<<ans[i]<<endl;
    return 0;
}
