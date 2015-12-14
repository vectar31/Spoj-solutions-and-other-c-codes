#include <iostream>
#include <vector>
#include <queue>
#include <cstdio>
#include <list>
#define N 10001
#define inf (1<<20)
using namespace std;
int n,x;
int maxim,ans;
vector < list <int> > a(10001);
void bfs(int s)
{
    bool visited[N];
    maxim=s;
    int d[N];
    for(int i=0;i<=n;i++)
    {
        visited[i]=false;
        d[i]=inf;
    }
    queue <int> q;
    q.push(s);visited[s]=true;
    d[s]=0;//color[1]=1;
    while(!q.empty())
    {
        int t=q.front();
        q.pop();
        list<int>::iterator iter;
        for(iter=a[t].begin();iter!=a[t].end();iter++)
        {
            if(!visited[*iter])
            {
                visited[*iter]=1;
                d[*iter]=d[t]+1;
                if(d[*iter]>d[maxim])
                    maxim=*iter;
                q.push(*iter);
            }
        }
    }
    ans=d[maxim];


}
int main()
{
    int s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int b1,b2;
        cin>>b1>>b2;
        a[b1].push_back(b2);
        a[b2].push_back(b1);
        s=b1;
    }
    bfs(s);
    bfs(maxim);
    cout<<ans<<endl;
    return 0;
}
