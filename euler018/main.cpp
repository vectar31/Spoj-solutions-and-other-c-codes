#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n][n],d[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i+1;j++)
            {
                cin>>a[i][j];
                d[i][j]=0;
            }
        }
        d[0][0]=a[0][0];
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(d[i+1][j]<a[i+1][j]+d[i][j])
                    d[i+1][j]=a[i+1][j]+d[i][j];
                if(d[i+1][j+1]<a[i+1][j+1]+d[i][j])
                    d[i+1][j+1]=a[i+1][j+1]+d[i][j];
                //if(j-1>=0&&(d[i+1][j-1]<a[i+1][j-1]+d[i][j]))
                  //  d[i+1][j-1]=a[i+1][j-1]+d[i][j];
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
            ans=max(ans,d[n-1][i]);
        cout<<ans<<endl;
    }
    return 0;
}
