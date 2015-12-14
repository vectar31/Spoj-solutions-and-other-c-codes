#include <iostream>
//#include <bits/stdc++.h>
#include <queue>
using namespace std;
struct pos{
    int x;
    int y;
};
pos adj(int n,pos t)
{
    pos a;
    a.x=t.x;
    a.y=t.y;
    if(n==0)
    {
        a.x+=2;
        a.y+=1;
        if(a.x<0||a.x>7||a.y<0||a.y>7)
        {
            a.x=-1;
            a.y=-1;
        }
    }
    if(n==1)
    {
        a.x+=1;
        a.y+=2;
        if(a.x<0||a.x>7||a.y<0||a.y>7)
        {
            a.x=-1;
            a.y=-1;
        }
    }
    if(n==2)
    {
        a.x-=2;
        a.y-=1;
        if(a.x<0||a.x>7||a.y<0||a.y>7)
        {
            a.x=-1;
            a.y=-1;
        }
    }
    if(n==3)
    {
        a.x-=1;
        a.y-=2;
        if(a.x<0||a.x>7||a.y<0||a.y>7)
        {
            a.x=-1;
            a.y=-1;
        }
    }
    if(n==4)
    {
        a.x+=2;
        a.y-=1;
        if(a.x<0||a.x>7||a.y<0||a.y>7)
        {
            a.x=-1;
            a.y=-1;
        }
    }
    if(n==5)
    {
        a.x-=2;
        a.y+=1;
        if(a.x<0||a.x>7||a.y<0||a.y>7)
        {
            a.x=-1;
            a.y=-1;
        }
    }
    if(n==6)
    {
        a.x-=1;
        a.y+=2;
        if(a.x<0||a.x>7||a.y<0||a.y>7)
        {
            a.x=-1;
            a.y=-1;
        }
    }
    if(n==7)
    {
        a.x+=1;
        a.y-=2;
        if(a.x<0||a.x>7||a.y<0||a.y>7)
        {
            a.x=-1;
            a.y=-1;
        }
    }
    return a;
}
int main()
{
    //char ch[]={'a','b','c','d','e','f','g','h'};
    int t;
    cin>>t;
    while(t--)
    {
    char c1[3],c2[3];
    cin>>c1>>c2;
    pos s,d;
    s.x=c1[0]-'a';s.y=(c1[1]-'0')-1;
    d.x=c2[0]-'a';d.y=(c2[1]-'0')-1;
    //cout<<s.x<<" "<<s.y<<endl;
    //cout<<d.x<<" "<<d.y<<endl;
    bool visited[8][8];
    int dist[8][8];
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            dist[i][j]=-1;
            visited[i][j]=0;
        }
    }
    queue < pos > q;
    q.push(s);
    visited[s.x][s.y]=1;
    dist[s.x][s.y]=0;
    //int c=0;
    while(!q.empty())
    {
        pos t=q.front();
        q.pop();
        for(int i=0;i<8;i++)
        {
            pos b=adj(i,t);
            //cout<<b.x<<" "<<b.y<<endl;
            if(b.x!=-1)
            {
                if(!visited[b.x][b.y])
                {
                    q.push(b);
                    visited[b.x][b.y]=1;
                    dist[b.x][b.y]=dist[t.x][t.y]+1;
                }
            }
        }

    }
    cout<<dist[d.x][d.y]<<endl;
    }
    return 0;
}
