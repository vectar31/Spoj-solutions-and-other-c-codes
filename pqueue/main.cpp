#include <iostream>
#include <queue>
#include <cstdio>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        queue <int> q;
        priority_queue <int> pq;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            q.push(a);
            pq.push(a);
        }
        int i=1;
        int time = 1;
        while(!q.empty())
        {
            /*cout<<i++<<" q ka front "<<q.front()<<" pq ka top "<<pq.top()<<" m= "<<m <<" n= "<<n<<" time=  "<<endl;
            if(i==10)
                break;*/
            if((q.front()== pq.top())&&(m==0))
            {
                cout<<time<<endl;
                break;
            }
            else if(q.front()==pq.top())
            {
                time++;
                pq.pop();
                q.pop();
                m--;
                n--;
            }
            else
            {
                if(m==0)
                    m=n-1;
                else
                    m--;
                int a=q.front();
                q.pop();
                q.push(a);
            }
        }

    }
    return 0;
}
