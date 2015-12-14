#include <bits/stdc++.h>
#define NN 1000001
#define N 100001
#define ll long long
using namespace std;
ll a[NN];
ll ans[NN]={0};
int sum(int n)
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
    }
    return res;
}
int main()
{
    a[0]=0;a[1]=1;a[2]=3;
    for(int i=3;i<N;i++)
        a[i]=sum(i);
    //cout<<"done"<<endl;
    ll ansum=0;
    ans[0]=0;ans[1]=0;
    for(int i=2;i<N;i++)
    {
        int d1=a[i];
        int d2=0;
        if(d2>=N)
            d2=sum(d1);
        else
            d2=a[d1];
        if(d2==i && d1!=i)
            ans[i]=ans[i-1]+i;
        else
            ans[i]=ans[i-1];

    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<ans[n-1]<<endl;
    }
    return 0;
}
