#include <bits/stdc++.h>
#define N 1000001
#define ll long long
using namespace std;
bool prime[N];
ll sum[N];
int main()
{
    for(int i=0;i<N;i++)
        prime[i]=1;
    prime [0]=0;prime[1]=0;
    for(int i=2;i*i<=N;i++)
        if(prime[i])
            for(int j=2;i*j<=N;j++)
                prime[i*j]=0;
    sum[0]=0;sum[1]=0;sum[2]=2;
    for(int i=3;i<N;i++)
    {
        if(prime[i])
            sum[i]=sum[i-1]+i;
        else
            sum[i]=sum[i-1];
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<sum[n]<<endl;
    }
    return 0;
}
