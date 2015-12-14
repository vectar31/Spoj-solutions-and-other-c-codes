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
    int t;
    cin>>t;
    while(t--)

    {
        int n,e;
        cin>>n>>e;
        //N=n;
        if(e==0)
            cout<<n<<endl;
        else
        {
            vector<list<int> > a (n);
            int cl[n];
            bool visited[n];
            for(int i=0;i<e;i++)
            {
                int b1,b2;
                cin>>b1>>b2;
                a[b1].push_back(b2);
                a[b2].push_back(b1);
            }

            for(int i=0;i<n;i++)
            {
                visited[i]=0;
                cl[i]=0;
            }
            int c=0;
            for(int i=0;i<n;i++)
            {
                //cout<<"yaha"<<endl;
                if(cl[i]==0)
                {
                    queue <int> q;
                    //cout<<"yaha1"<<endl;
                    c+=1;
                    q.push(i);
                    visited[i]=1;
                    cl[i]=c;
                    while(!q.empty())
                    {
                        //cout<<"yaha2"<<endl;
                        int t=q.front();
                        q.pop();
                        list<int>::iterator it;
                        for(it=a[t].begin();it!=a[t].end();it++ )
                        {
                            //cout<<"yaha3"<<endl;
                            if(!visited[*it])
                            {
                                q.push(*it);
                                visited[*it]=1;
                                cl[*it]=c;
                            }
                        }
                    }
                }
            }
            cout<<c<<endl;
        }
    }
    return 0;
}
