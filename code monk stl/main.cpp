#include <bits/stdc++.h>
#define ll long long
using namespace std;
//ll a[100001]
bool cmp(string a ,string b)
{
    return a>b;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        priority_queue<ll,vector<ll> > q;
        while(n--)
        {
            ll a;
            cin>>a;
            q.push(a);
        }
        ll ans=0;
        while(k!=0)
        {
            ll temp=q.top();q.pop();//cout<<temp<<endl;
            ans+=temp;
            q.push(temp/2);
            k-=1;
        }
        cout<<ans<<endl;
    }
    return 0;
}
