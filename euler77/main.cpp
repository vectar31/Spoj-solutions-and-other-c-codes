#include <bits/stdc++.h>
#define N 1001
#define ll long long
using namespace std;
bool prime[N];
ll ans[N]={0};
int coins[N]={0};
int main()
{
    for(int i=0;i<N;i++)
        prime[i]=1;
    prime [0]=0;prime[1]=0;
    for(int i=2;i*i<=N;i++)
        if(prime[i])
            for(int j=2;i*j<=N;j++)
                prime[i*j]=0;
    int c=0;
    for(int i=2;i<N;i++)
        if(prime[i])
            coins[c++]=i;
    ans[0]=1;
    for(int i=0;i<c;i++)
        for(int j=coins[i];j<N;j++)
            ans[j]=ans[j]+ ans[j-coins[i]];
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<ans[n]<<endl;
    }
}
