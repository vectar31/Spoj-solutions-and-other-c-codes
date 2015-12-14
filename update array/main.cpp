#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,u;
        cin>>n>>u;
        int a[n+1],ans[n],l,r,d;
        for(int i=0;i<=n;i++)
            a[i]=0;
        for(int i=0;i<n;i++)
        {
            cin>>l>>r>>d;
            a[l]+=d;
            a[r+1]-=d;
        }
        int res=0;
        for(int i=0;i<n;i++)
        {
            res+=a[i];
            ans[i]=res;
        }
        int m,q;
        cin>>m;
        for(int i=0;i<m;i++)
        {
            cin>>q;
            cout<<ans[q]<<endl;
        }
    }
    return 0;
}
