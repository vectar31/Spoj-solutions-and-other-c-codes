#include <bits/stdc++.h>
#define ll long long
#define N 1000010
using namespace std;
bool prime[N];
bool checkprime(ll n)
{
    if(n%2==0)
        return false;
    for(ll i=3;i*i<=n;i+=2)
        if(n%i==0)
            return false;
    return true;
}
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
        ll ans;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                ll a=n/i;
                if(a<N)
                {
                    if(prime[a])
                    {
                        ans=a;
                        break;
                    }
                }
                else
                {
                    if(checkprime(a))
                    {
                        ans=a;
                        break;
                    }
                }
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}
