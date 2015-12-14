#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
        bool f=true;
        queue<int> q;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            q.push(a);
        }
        stack<int> s;
        for(int i=1;i<=n;)
        {
            if((!q.empty())&&(!s.empty()))
            {
                if(q.front()==i)
                {
                    q.pop();
                    i++;
                }
                else if(s.top()==i)
                {
                    s.pop();//cout<<"1b "<<i<<endl;
                    i++;
                }
                else if(s.top()>q.front())
                {
                    s.push(q.front());
                    q.pop();
                }
                else if(s.top()<q.front())
                {
                    f=false;
                    break;
                }
                else
                {
                    f=false ;
                    break;
                }
            }
            else if(q.empty())
            {
                if(s.top()==i)
                {
                    s.pop();
                    i++;
                }
                else if(s.top()>i)
                {
                    s.push(i);
                }
                else
                {
                    f=false;
                    break;
                }
            }
            else
            {
                if(q.front()==i)
                {
                    q.pop();
                    i++;
                }
                else
                {
                    s.push(q.front());q.pop();
                }
            }
        }
        if(f)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
        cin>>n;
    }
    return 0;
}
