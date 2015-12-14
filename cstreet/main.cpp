#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#define edge pair < int, int >
#define MAX 10000
using namespace std;
int parent[MAX];
vector < pair < int , edge > > G,MST;
void reset (int n)
{
    G.clear();
    MST.clear();
    for(int i=0;i<n;i++)
        parent[i]=i;

}
int finds(int x)
{
    if(x!=parent[x])
        parent[x]=finds(parent[x]);
    return parent[x];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p,n,m,a,b,c,pa,pb,ans=0;
        scanf("%d%d%d", &p,&n,&m);
        reset(n);
        for(int i=0;i<m;i++)
        {
            scanf("%d%d%d", &a,&b,&c);
            G.push_back(pair< int , edge > (c, make_pair(a,b)));
        }
        sort(G.begin(),G.end());
        for(int i=0;i<m;i++)
        {
            pa=finds(G[i].second.first);
            pb=finds(G[i].second.second);
            if(pa!=pb)
            {
                MST.push_back(G[i]);
                ans+=G[i].first;
                parent[pa]=parent[pb];
                if(MST.size()==n-1)
                    break;
            }
        }
        printf("%d\n",p*ans);
    }
    return 0;
}
