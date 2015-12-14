#include <bits/stdc++.h>
#define N 500001
using namespace std;
bool prime[N];
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
        int n;
        cin>>n;
        int ans=0;
        for(int i=1;i*i<(n);i++)
        {
            int a=n-(2*i*i);
            if(a<2)
                break;
            if(prime[a])
                ans++;
        }
        cout<<ans<<endl;
    }
}
