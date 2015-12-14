#include <bits/stdc++.h>
#define ll long long
using namespace std;
int dx[]={0,0,1,-1};
int dy[]={0,0,1,-1};
struct pos
{
    int x,y;
};
int main()
{
    int n;
    while(cin>>n)
    {
        int a[n][n];
        bool visited[n][n];
        int d[n][n];
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
                visited[i][j]=false;
                d[i][j]=-1;
            }
            pos s={0,0};
        visited[s.x][s.y]=true;
        d[s.x][s.y]=0;
        queue <pos> q;
        q.push(s);
        while(!q.empty())
        {
            pos t=q.front();
            q.pop();
            for(int i=0;i<4;i++)
            {
                pos temp={t.x+dx[i],t.y+dy[i]};
                if(temp.x>=0&&temp.y>=0&&temp.x<n&&temp.y<n  && a[temp.x][temp.y]==1  ) // whatever condition you want
                {
                    q.push(temp);
                    visited[temp.x][temp.y]=1;
                    d[temp.x][temp.y]=d[t.x][t.y]+1;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cout<<d[i][j];
            cout<<endl;
        }
    }
    return 0;
}
