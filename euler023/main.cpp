#include <bits/stdc++.h>
#define N 100001
#define ll long long
using namespace std;
ll a[N];
ll ans[N]={0};
bool sum(int n)
{
    ll res=1;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            res+=i;
            if(i*i!=n)
                res+=(n/i);
        }
        if(res>n)
            return true;
    }
    return false;
}
int main()
{
    int c=0;
    for(int i=12;i<N;i++)
        if(sum(i))
            a[c++]=i;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        bool f=1;
        for(int i=0;i<c;i++)
        {
            if(a[i]>=n)
                {
                    f=0;
                    break;
                }
            int b=n-a[i];
            if(binary_search(a,a+c,b))
                break;
        }
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
