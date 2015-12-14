#include <iostream>
#include <queue>
#include <vector>
#define inf (1<<20)
using namespace std;
int d[200][200],m,n;
bool visited[200][200];
char a[200][200];
struct pos
{
    int x;
    int y;
};
int abso(int x)
{
    if(x>0)
        return x;
    return -x;
}
int x[]={0,0,1,-1};
int y[]={1,-1,0,0};
pos next(pos temp,int i)
{
    pos ne={temp.x+x[i],temp.y+y[i]};
    if(ne.x>=n||ne.x<0||ne.x>=m||ne.y<0)
    {
        ne.x=-1;ne.y=-1;
    }
    return ne;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        queue <pos> q;
        cin>>m>>n;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                {
                    d[i][j]=inf;
                    visited[i][j]=false;
                }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='1')
                {
                    pos temp={i,j};
                    q.push(temp);
                    d[temp.x][temp.y]=0;
                    visited[i][j]=true;
                }
            }
        }
        while(!q.empty())
        {
            pos temp=q.front();
            q.pop();
            for(int i=0;i<4;i++)
            {
                pos adj=next(temp,i);
                if(adj.x!=-1 && !visited[adj.x][adj.y])
                {
                    d[adj.x][adj.y]=d[temp.x][temp.y]+1;
                    visited[adj.x][adj.y]=true;
                    q.push(adj);
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
                cout<<d[i][j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
