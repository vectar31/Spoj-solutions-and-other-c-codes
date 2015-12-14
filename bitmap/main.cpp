#include <iostream>
#include <queue>
#include <cstdio>
#include <cmath>
using namespace std;
struct pos{
    int x;
    int y;
};
pos adj(int i,pos t,int m, int n)
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
    if(an.x>=m||an.x<0||an.y>=n||an.y<0)
    {
        an.x=-1;
        an.y=-1;
    }
    return an;
}
int abso(int n)
{
    if(n>0)
        return n;
    else
        return  -n;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        char a[m][n];
        //int ans[m][n];
        queue <pos> q;
        int dist[m][n];
        //bool visited[m][n];
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                {
                    cin>>a[i][j];
                    //ans[i][j]=400;
                    //visited[i][j]=0;
                    dist[i][j]=4000;
                    if(a[i][j]=='1')
                    {
                     //   ans[i][j]=0;
                        pos s;s.x=i;s.y=j;
                        q.push(s);
                        //visited[s.x][s.y]=1;
                        dist[s.x][s.y]=0;
                    }
                }

                while(!q.empty())
                {
                    pos t=q.front();
                    q.pop();
                    for(int u=0;u<8;u++)
                    {
                        pos temp=adj(u,t,m,n);
                        if(temp.x!=-1  && dist[temp.x][temp.y]>dist[t.x][t.y]+1)
                        {
                            //if(!visited[temp.x][temp.y])
                            {
                                q.push(temp);
                                //visited[temp.x][temp.y]=1;

                                dist[temp.x][temp.y]=dist[t.x][t.y]+1;
                                    //ans[temp.x][temp.y]=abso(temp.x-t.x)+abso(temp.y-t.y);
                                }
                            }
                            /*if(a[temp.x][temp.y]=='0')
                            {
                                //cout<<"papa "<<endl;cout<<abso(temp.x-i)+abso(temp.y-j)<<endl;
                                if(abso(temp.x-i)+abso(temp.y-j)<ans[temp.x][temp.y])
                                {ans[temp.x][temp.y]=abso(temp.x-i)+abso(temp.y-j);}
                            }*/
                        }
                    }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
                cout<<dist[i][j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
