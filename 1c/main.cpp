#include <iostream>
#include <queue>
using namespace std;
struct pos{
    int x;
    int y;
};
pos adj(int i,pos t,int n)
{
    //int a=t.x,b=t.y;
    pos an;
    an.x=t.x;an.y=t.y;
    if(i==0)
    {
        an.x+=1;
        an.y+=1;
    }
    if(i==1)
    {
        an.x+=1;
        an.y+=0;
    }
    if(i==2)
    {
        an.x+=0;
        an.y+=1;
    }
    if(i==3)
    {
        an.x-=1;
        an.y-=1;
    }
    if(i==4)
    {
        an.x-=1;
        an.y-=0;
    }
    if(i==5)
    {
        an.x-=0;
        an.y-=1;
    }
    if(i==6)
    {
        an.x+=1;
        an.y-=1;
    }
    if(i==7)
    {
        an.x-=1;
        an.y+=1;
    }
    if(an.x>=n||an.x<0||an.y>=n||an.y<0)
    {
        an.x=-1;
        an.y=-1;
    }
    return an;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        pos s,e,b;
        cin>>n>>s.x>>s.y>>e.x>>e.y>>b.x>>b.y;
        queue <pos> q;
        int dist[n][n];
        bool visited[n][n];
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            visited[i][j]=false;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                dist[i][j]=-1;
        q.push(s);
        //cout<<s.x<<" "<<s.y<<endl;
        dist[s.x][s.y]=0;
        visited[s.x][s.y]=true;
        bool f=0;
                while(!q.empty())
                {
                    pos t=q.front();
                    q.pop();
                    cout<<t.x<<" "<<t.y<<endl;

                    for(int u=0;u<8;u++)
                    {
                        pos temp=adj(u,t,n);
                        cout<<temp.x<<" "<<temp.y<<", ";
                        if(temp.x==e.x&&temp.y==e.y)
                            f=1;
                        if(temp.x!=-1&&visited[temp.x][temp.y]==false &&temp.x!=b.x&&temp.y!=b.y)
                            {
                                q.push(temp);
                                dist[temp.x][temp.y]=dist[t.x][t.y]+1;
                                visited[temp.x][temp.y]=true;
                                    //ans[temp.x][temp.y]=abso(temp.x-t.x)+abso(temp.y-t.y);
                            }
                    }
                    cout<<endl;
                    if(f)
                        break;

                }
                cout<<dist[e.x][e.y]<<endl;

    }

    return 0;
}
