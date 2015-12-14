#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#define ll long long

using namespace std;
int a[10001];
ll ans[10001];
int n;
ll max(ll a , ll b)
{
    if(a>b)
        return a;
    return b;
}
int main()
{
    int t;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        cin>>n;
        for(int i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
                ans[i]=-1;
            }

        ans[0]=a[0];ans[1]=a[1];
        ans[2]=max(a[2]+ans[0],ans[1]);
        for(int i=3;i<n;i++)
            ans[i]=max(max(ans[i-2],ans[i-3])+a[i],ans[i-1]);
        /*for(int i=0;i<n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;*/
        cout<<"Case "<<j<<": "<<ans[n-1]<<endl;

    }
    return 0;
}
