#include <iostream>
#include <cmath>
#include <algorithm>
#include <ctime>
#include <vector>
#include <list>
#include <queue>
#define N 1000000007
using namespace std;
int main()
{
    //int c=0;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){int flag=1;
            int bug, inter;
    cin>>bug>>inter;
    vector < list<int> > a(bug+1);
    for(int j=1;j<=inter;j++)
    {
        int b1,b2;
        cin>>b1>>b2;
        a[b1].push_back(b2);
        a[b2].push_back(b1);
    }
    bool visited[bug+1];
    int color[bug+1];
    for(int k=1;k<=bug;k++)
        color[k]=-1;
    //int d[bug+1];
    queue <int> q;
    q.push(1);visited[1]=true;color[1]=1;
    while(!q.empty())
    {
        int t=q.front();
        q.pop();
        list<int>::iterator iter;
        for(iter=a[t].begin();iter!=a[t].end();iter++)
        {
            if(color[*iter]==-1)
            {
                q.push(*iter);

            }
            else
            {
                if(color[*iter]==color[t])
                {
                    flag=0;
                }
            }
        }
        if(flag==0)
            break;
    }
    if(flag)
        cout<<"No suspicious bugs found!"<<endl;
    else
        cout<<"Suspicious bugs found!"<<endl;
    }
    return 0;
}
