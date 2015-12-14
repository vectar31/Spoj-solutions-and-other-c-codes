#include <iostream>
#include <cmath>
#define ll long long
#define N 100001
#define M 1000000007
using namespace std;
ll a[100002];
long long mod(int a,ll b)
{
    ll res=1,y=a;
    while(b>0)
    {
        if(b&1)
            res=((res%M)*(y%M))%M;
        y=((y%M)*(y%M))%M;
        b=b>>1;
    }
    return res;
}
int main()
{
    a[0]=0;
    a[1]=1;
    a[2]=3;
    int b=1;
    for(int i=3;i<N;i++)
        a[i]=((2*a[i-1])%M+(mod(2,b++)))%M;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        cout<<"Case "<<i<<": "<<a[n]<<endl;
    }
    return 0;
}
