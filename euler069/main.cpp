#include <bits/stdc++.h>
#define ll long long
#define N 1000001
using namespace std;
bool prime[N];
ll a[60];
int main()
{
    for(int i=0;i<N;i++)
        prime[i]=1;
    prime [0]=0;prime[1]=0;
    for(int i=2;i*i<=N;i++)
        if(prime[i])
            for(int j=2;i*j<=N;j++)
                prime[i*j]=0;
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll temp=1,ans=1;
        for(int i=2;i<N;i++)
        {
            if(prime[i])
            {
                temp*=i;
                if(temp>ans&&temp<n)
                    ans=temp;
                else
                    break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
