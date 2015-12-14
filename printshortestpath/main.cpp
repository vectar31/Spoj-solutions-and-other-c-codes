#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <set>
#include <cstdio>
using namespace std;
#define pii pair < int, int>
#define pb(x) push_back(x)
#define MAX 100001
#define inf (1<<20)

struct comp{
    bool operator()(const pii &a, const pii &b)
    {
        return a.second>b.second;
    }
};
void printpath(int p[],int d,int s)
{
    if(d==s)
        cout<< p [d] <<"---> ";
    printpath(p,p[d],s);
}
priority_queue < pii , vector < pii > , comp > Q;
vector <pii> G[MAX];
int d[MAX];
bool visited [MAX];
int p[MAX];
int main()
{
    int i,u,v,w,sz,nodes,edges,s;
    cin>>nodes>>edges;
    for( i =  0; i < edges ; i++ )
    {
        cin>>u>>v>>w;
        G[u].pb(pii(v,w));
        //G[v].pb(pii(u,w));
    }
    cin>>s;
    for(int i=1;i<=nodes ; i++)
        d[i]=inf;
    d[s]=0;
    for(int i=0;i<=nodes;i++)
        p[i]=-1;
    p[s]=s;
    Q.push(pii(s,0));
    while(!Q.empty())
    {
        u=Q.top().first;
        Q.pop();
        if(visited[u])
            continue;;
        sz=G[u].size();
        for(i=0;i<sz;i++)
        {
            v=G[u][i].first;
            w=G[u][i].second;
            if(!visited[v]&&(d[u]+w<d[v]))
            {
                d[v]=d[u]+w;
                Q.push(pii(v,d[v]));
                p[v]=u;
            }
        }
        visited[u]=1;
    }

    printpath(p,4,s);
    for(int i=1;i<=nodes;i++)
        cout<<"The shortest distance from "<<s<<" to "<<i<<" is "<<d[i]<<endl;
    return 0;
}
