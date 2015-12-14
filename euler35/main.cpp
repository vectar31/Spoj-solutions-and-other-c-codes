#include <bits/stdc++.h>
#define ll long long
#define N 1000001
using namespace std;
bool prime[N];
bool cprime[N]={0};
ll ans[N]={0};

int main()
{
    for(int i=0;i<N;i++)
        prime[i]=1;
    prime [0]=0;prime[1]=0;
    for(int i=2;i*i<=N;i++)
        if(prime[i])
            for(int j=2;i*j<=N;j++)
                prime[i*j]=0;
    ll temp=10;
    int d=1;
    for(int i=2;i<N;i++)
    {
        if(i>=temp)
        {
            d+=1;
            temp*=10;
        }
        if(prime[i])
        {
            int cy=i;
            bool f=1;
            for(int j=1;j<=d;j++)
            {
                cy=((cy%10)*(temp/10))+(cy/10);
                if(!prime[cy])
                {
                    f=0;
                    break;
                }
            }
            if(f)
                ans[i]=ans[i-1]+i;
            else
                ans[i]=ans[i-1];
        }
        else
            ans[i]=ans[i-1];

    }
    int n;
    cin>>n;
    cout<<ans[n]<<endl;
    return 0;
}
