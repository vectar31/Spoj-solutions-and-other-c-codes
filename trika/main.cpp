#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int m,n,x,y;
    cin>>m>>n>>x>>y;
    int a[m][n],d[m][n];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
                d[i][j]=-1;
            }
    d[x-1][y-1]=a[x-1][y-1];
    for(int k=0;k<m;k++)
    {
        for(int l=0;l<n;l++)
        {
            for(int i=0;i<m;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(d[i][j]!=-1)
                    {
                        if(i+1<m)
							d[i+1][j]=max(d[i+1][j],d[i][j]-a[i+1][j]);
						if(j+1<n)
							d[i][j+1]=max(d[i][j+1],d[i][j]-a[i][j+1]);
                    }
                }
            }
        }
    }
    if(d[m-1][n-1]==-1)
        cout<<"N"<<endl;
    else
        cout<<"Y "<<d[m-1][n-1]<<endl;
    return 0;
}
