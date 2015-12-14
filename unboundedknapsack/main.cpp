#include <iostream>
#define max(a,b) a>b?a:b
using namespace std;

int main()
{
    int n,W;
    cin>>n;
    int v[n],w[n];
    for(int i=0;i<n;i++)
        cin>>v[i]>>w[i];
    cin>>W;
    int ans[W+1];
    ans[0]=0;
    int best=0;
    for(int i=1;i<=W;i++)
    {
        //ans[i]=ans[i-1];
        for(int j=0;j<n;j++)
        {
            if(i>=w[j])
                best=max(best,ans[i-w[j]]+v[j]);
        }
        ans[i]=best;
    }

    for(int i=1;i<=W;i++)
        cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}
