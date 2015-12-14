#include <bits/stdc++.h>
#define ll long long
#define N 100001
using namespace std;
ll f[10];
ll a[N];
bool check(int n)
{
    int c=n;ll sum=0;
    while(n!=0)
    {
        int a=n%10;
        sum+=f[a];
        n/=10;
    }
    return sum%c==0;
}
int main()
{
    f[0]=f[1]=1;
    for(int i=2;i<10;i++)
        f[i]=i*f[i-1];
    ll sum=0;
    for(int i=10;i<N;i++)
    {
        if(check(i))
            sum+=i;
        a[i]=sum;
    }

        int n;
        cin>>n;
        cout<<a[n]<<endl;
    return 0;
}
