#include <bits/stdc++.h>
#define pos pair<int,int>
#define mp(a,b) make_pair(a,b)
//#include <pair>
using namespace std;
struct vessel{
    int a,b;
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int ans=0;
        if(c>a&&c>b)
            ans=-1;
        else if(a==c||b==c)
            ans=1;
        else
        {
            ans=1;
            queue < pair<int,int> > q;
            pos temp1=mp(a,0);
            pos temp2=mp(0,b);
            q.push(temp1);
            q.push(temp2);
            while(!q.empty())
            {
                pos temp=q.front();
                q.pop();
                int aa=temp.first;
                int bb= temp.second;
                pos adj1=mp(0,bb);
                pos adj2=mp(aa,0);
                pos adj4=mp(a,bb);
                pos adj5=mp(aa,b);
                q.push(adj1);q.push(adj2);q.push(adj4);q.push(adj5);
                pos adj3;
                if(aa>0)
                {
                    int p=bb+aa;
                    if(p>a)
                    {
                        p=a;
                        bb=bb-(a-aa);
                    }
                    else
                        bb=0;
                    adj3=mp(p,bb);
                    q.push(adj3);
                    if(p==c||bb==c)
                    {
                        ans+=1;
                        break;
                    }
                }
                if(bb>0)
                {
                    int p=bb+aa;
                    if(p>b)
                    {
                        p=b;
                        aa=aa-(b-bb);
                    }
                    else
                        aa=0;
                    adj3=mp(bb,p);
                    q.push(adj3);
                }
                ans+=1;
                if(adj1.first==c||adj2.first==c||adj3.first==c||adj4.first==c||adj5.first==c||adj1.second==c||adj2.second==c||adj3.second==c||adj4.second==c||adj5.second==c)
                    break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
