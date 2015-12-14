#include <bits/stdc++.h>
#define ll long long
#define N 100001
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
        int a=sqrt(n);
        int b[2];
        int c=0;
        int ans=1;

        for(int i=a-1; ;i++)
        {
            if(prime[i])
            {
                b[c++]=i;
                ans*=i;
            }
            if(c==2)
                break;
        }
        cout<<ans<<endl;
    }
    return 0;
}
