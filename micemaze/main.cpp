#include <iostream>
#define inf (1<<20)
using namespace std;

int main()
{
    int n,e,m,t;
    cin>>n>>e>>t>>m;
    int g[n+1][n+1];
    for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
            g[i][j]=inf;
            g[i][i]=0;
        }
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        g[u][v]=w;
    }
    for(int k=1;k<=n;k++)
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                if(g[i][k]+g[k][j]<g[i][j])
                    g[i][j]=g[i][k]+g[k][j];
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        if(g[i][e]<=t)
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}
