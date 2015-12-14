#include <bits/stdc++.h>
#define N 110001
using namespace std;
bool prime[N];
int a[N];
int main()
{
    for(int i=0;i<N;i++)
        prime[i]=1;
    prime [0]=0;prime[1]=0;
    for(int i=2;i*i<=N;i++)
        if(prime[i])
            for(int j=2;i*j<=N;j++)
                prime[i*j]=0;
    int c=1;
    a[0]=0;
    for(int i=2;i<N;i++)
        if(prime[i])
            a[c++]=i;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<a[n]<<endl;
    }
    return 0;
}
