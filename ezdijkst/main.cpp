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
int main()
{
    int t;
    scanf("%d" , &t);
    while(t--)
    {
        priority_queue < pii , vector < pii > , comp > Q;
        vector <pii> G[MAX];
        int d[MAX];
        bool visited [MAX];
        int i,u,v,w,sz,dest,nodes,edges,s;
        scanf("%d%d%d%d" , &nodes , &edges , &s , &dest);
        for( i =  0; i < edges ; i++ )
        {
            scanf("%d%d%d" , &u, &v , &w);
            G[u].pb(pii(v,w));
            G[v].pb(pii(u,w));
        }

        for(int i=1;i<=nodes ; i++)
            {d[i]=inf;visited[i]=0;}
        d[s]=0;
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
                }
            }
            visited[u]=1;
            if(u==dest)
                break;
        }
        if(visited[dest])
            cout<<d[dest]<<endl;
        else
            cout<<"NONE"<<endl;
    }
    return 0;
}
