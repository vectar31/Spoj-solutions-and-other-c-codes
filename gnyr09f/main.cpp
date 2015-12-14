#include <iostream>

using namespace std;

int main()
{
        int p,n,k;
        n=101;k=101;
        int a[k+1][n+1][2];
        for(int i=0;i<=k;i++)
            for(int j=0;j<=n;j++)
                a[i][j][0]=a[i][j][1]=0;
        for(int i=0;i<=k;i++)
            a[i][0][0]=a[i][0][1]=0;
        a[0][1][0]=a[0][1][1]=0;
        a[0][2][0]=2;
        a[0][2][1]=1;
        for(int i=3;i<=n;i++)
        {
            a[0][i][0]=a[0][i-1][0]+a[0][i-1][1];
            a[0][i][1]=a[0][i-1][0];
        }
        a[1][2][1]=1;
        for(int i=1;i<=k;i++)
        {
            for(int j=3;j<=n;j++)
            {
                a[i][j][0]=a[i][j-1][0]+a[i][j-1][1];
                a[i][j][1]=a[i][j-1][0]+a[i-1][j-1][1];
            }
        }
    int t;
    cin>>t;
    while(t--)
    {
        cin>>p>>n>>k;
        cout<<p<<" "<<a[k][n][0]+a[k][n][1]<<endl;
    }
    return 0;
}
