#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n];
    int ans[n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    if(n==2)
        ans[0]=ans[1]=(a[0][1]/2);
    else
    {
        ans[0]=(a[0][1]+a[0][2]-a[1][2])/2;
        for(int i=1;i<n;i++)
            ans[i]=a[i-1][i]-ans[i-1];
    }
    for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";
    return 0;
}
