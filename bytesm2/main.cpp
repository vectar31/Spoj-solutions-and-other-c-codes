#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int a[m][n];
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                scanf("%d",&a[i][j]);
        int b[m][n];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0)
                    b[i][j]=a[i][j];
                else
                    b[i][j]=0;
            }
        }
        for(int i=0;i<m-1;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j==0)
                {
                    if(b[i+1][j]<(b[i][j]+a[i+1][j]))
                        b[i+1][j]=(b[i][j]+a[i+1][j]);
                    if(b[i+1][j+1]<(b[i][j]+a[i+1][j+1]))
                        b[i+1][j+1]=(b[i][j]+a[i+1][j+1]);
                }
                else if(j==n-1)
                {
                    if(b[i+1][j]<(b[i][j]+a[i+1][j]))
                        b[i+1][j]=(b[i][j]+a[i+1][j]);
                    if(b[i+1][j-1]<(b[i][j]+a[i+1][j-1]))
                        b[i+1][j-1]=(b[i][j]+a[i+1][j-1]);
                }
                else
                {
                    if(b[i+1][j]<(b[i][j]+a[i+1][j]))
                        b[i+1][j]=(b[i][j]+a[i+1][j]);
                    if(b[i+1][j-1]<(b[i][j]+a[i+1][j-1]))
                        b[i+1][j-1]=(b[i][j]+a[i+1][j-1]);
                    if(b[i+1][j+1]<(b[i][j]+a[i+1][j+1]))
                        b[i+1][j+1]=(b[i][j]+a[i+1][j+1]);
                }
            }
        }
        int ans=0;
        for(int j=0;j<n;j++)
            ans=max(ans,b[m-1][j]);
        printf("%d\n" , ans);
    }
    return 0;
}
