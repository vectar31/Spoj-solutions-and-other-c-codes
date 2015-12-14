#include <bits/stdc++.h>
#define in(n) scanf("%d",&n)
using namespace std;

int main()
{
    int t,n,k;
    in(t);
    while(t--)
    {
        in(n);
        int r[n],c[n];
        vector< pair < int , pair<int , int> > v;
        for(int i=0;i<n;i++)
            in(r[i]);
        for(int i=0;i<n;i++)
            in(c[i]);
        for(int i=0;i<n;i++)
        {
            v.push_back(make_pair(c[i],make_pair(r[i],i)));
        }
        int ans=0;
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
            if(v[i].second>=k)
            {
                cout<<v[]
            }
    }
    return 0;
}
