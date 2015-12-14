#include <iostream>
#include <cmath>
#include <algorithm>
#include <ctime>
#include <vector>
#include <list>
#include <queue>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int bug,inter,f=1;
        cin>>bug>>inter;
        vector < list<int> > a(bug);
        int color[bug];
        for(int k=0;k<bug;k++)
            color[k]=-1;
        for(int j=0;j<inter;j++)
        {
            int b1,b2;
            cin>>b1>>b2;
            a[b1-1].push_back(b2-1);
            a[b2-1].push_back(b1-1);
        }
        list<int>::iterator iter;
        queue <int> q;
        q.push(0);color[0]=1;
        while (!q.empty())
        {
        // Dequeue a vertex from queue ( Refer http://goo.gl/35oz8 )
            int t = q.front();
            q.pop();
            for(iter=a[t].begin();iter!=a[t].end();iter++)
            {
                //cout<<"color "<<color[0]<<" "<<color[1]<<" "<<color[2]<<" "<<endl;
                if(color[*iter]==-1)
                {
                    color[*iter]=1-color[t];
                    q.push(*iter);
                }
                else
                {
                    if(color[*iter]==color[t])
                    {
                        f=0;
                        break;
                    }
                }
            }

            if(f==0)
                break;
        }
        cout<<"Scenario #"<<i<<":"<<endl;
        if(f)
            cout<<"No suspicious bugs found!"<<endl;
        else
            cout<<"Suspicious bugs found!"<<endl;
    }
    return 0;
}
