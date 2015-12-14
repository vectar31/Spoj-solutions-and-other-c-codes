#include <iostream>
#include <algorithm>
#include <cstdio>
#define N 1000001
#define ll long long
using namespace std;
  ll h1[N],h2[N];
  int n;
  ll k;ll ans=0;
  int count=0;
/* Returns count of pairs with difference k in arr[] of size n. */
ll abso(ll x)
{
    if(x>0)
        return x;
    return -x;
}

// Driver program to test above function
int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>h1[i];
    for(int i=0;i<n;i++)
        cin>>h2[i];
    sort(h1,h1+n);
    sort(h2,h2+n);
    bool f[n];
    for(int i=0;i<n;i++)
        f[i]=0;
    int l=0,r=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(f[j]==0&&abso(h1[i]-h2[j])<=k)
            {
                ans+=1;
                f[j]=1;
                break;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
