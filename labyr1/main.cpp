#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;
int m,n,maxd;
char c[1010][1010];
int d[1010][1010];
bool visited[1010][1010];
int xx[]={0,0,1,-1};
int yy[]={1,-1,0,0};
struct pos{
    int x;
    int y;
}maxim;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int m,n;
        cin>>n>>m;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            visited[i][j]=0;
        pos s;maxd=0;
        s.x=-1;
        s.y=-1;
        char c[m][n];
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            {
                cin>>c[i][j];
                if(c[i][j]=='.')
                {
                    visited[i][j]=1;
                    s.x=i;s.y=j;
                }
            }
            if(s.x!=-1)
            {
    queue <pos> q;
    for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            d[i][j]=-1;
    d[s.x][s.y]=0;
    q.push(s);
    while(!q.empty())
    {
        pos t=q.front();
        q.pop();
        for(int i=0;i<4;i++)
        {
            pos temp;
            temp.x=t.x+xx[i];
            temp.y=t.y+yy[i];
            if(temp.x>=0&&temp.x<n&&temp.y<m&&temp.y>=0&&c[temp.x][temp.y]=='.'&&d[temp.x][temp.y]==-1)
            {
                q.push(temp);
                d[temp.x][temp.y]=d[t.x][t.y]+1;
                if(maxd<d[temp.x][temp.y])
                {
                    maxd=d[temp.x][temp.y];
                    maxim=temp;
                }
            }
        }
    }
        //cout<<maxd<<endl;
       s=maxim;
        maxd=0;
    //queue <pos> qq;
    for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            d[i][j]=-1;
    d[s.x][s.y]=0;
    q.push(s);
    while(!q.empty())
    {
        pos t=q.front();
        q.pop();
        for(int i=0;i<4;i++)
        {
            pos temp;
            temp.x=t.x+xx[i];
            temp.y=t.y+yy[i];
            if(temp.x>=0&&temp.x<n&&temp.y<m&&temp.y>=0&&c[temp.x][temp.y]=='.'&&d[temp.x][temp.y]==-1)
            {
                q.push(temp);
                d[temp.x][temp.y]=d[t.x][t.y]+1;
                if(maxd<d[temp.x][temp.y])
                {
                    maxd=d[temp.x][temp.y];
                    //maxim=temp;
                }
            }
        }
    }
        /*for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
                cout<<d[i][j];
            cout<<endl;
        }*/
        bool ff=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(visited[i][j]==1&&d[i][j]==-1)
                {
                    maxd=0;
                    ff=1;
                    break;
                }
            }
            if(ff)
                break;
        }}
        cout<<"Maximum rope length is "<<maxd<<"."<<endl;
    }
    return 0;
}
