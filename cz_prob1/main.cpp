#include <iostream>
#include <cstdio>
#include <cmath>
#define p 8001
using namespace std;
bool prime[8001];
int main()
{
    for(int i = 0;i < p;i++)
        prime[i]=1;
    prime[0]=prime[1]=0;
    for(int i=2;i*i<=p;i++)
        if(prime[i]==1)
            for(int j=2;j*i<=p;j++)
                prime[i*j]=0;
    int a[550];
    a[1]=2;
    int c=2;
    for(int i=2;i<p;i++)
        if(prime[i]==1 && i%4==1)
            a[c++]=i;
    int ans[4][7994];
    for(int i=0;i<7994;i++)
        ans[1][i]=1;
    ans[2][0]=ans[2][1]=ans[3][0]=ans[3][1]=1;
    for(int i=2;i<=3;i++)
    {
        for(int j=2;j<=7993;j++)
            {
                if(j-i>=0)
                    ans[i][j]=ans[i-1][j]+ans[i][j-i];
                else
                    ans[i][j]=ans[i-1][j];
            }
    }
    //cout<<a[0]<<a[1]<<a[2]<<endl;
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;
        cout<<ans[k][a[n]]<<endl;
    }
    return 0;
}
