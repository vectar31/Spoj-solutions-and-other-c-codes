#include <bits/stdc++.h>
#define N 1001
#define inf (1<<30)
#define ll long long
using namespace std;
int a[N][N];
ll ans[N][N];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
                ans[i][j]=inf;
            }
    for(int i=0;i<n;i++)
        ans[i][0]=a[i][0];
    for(int j=0;j<n-1;j++)
    {
        for(int i=0;i<n;i++)
        {
            if(ans[i+1][j]>a[i+1][j]+ans[i][j] && i+1<n)
                ans[i+1][j]=a[i+1][j]+ans[i][j];
            if(ans[i][j+1]>a[i][j+1]+ans[i][j] && j+1<n )
                ans[i][j+1]=a[i][j+1]+ans[i][j];
        }
    }
    ll minans=inf;
    for(int i=0;i<n;i++)
        minans=min(minans,ans[i][n-1]);
    cout<<minans<<endl;


    return 0;
}
