#include <bits/stdc++.h>
#define ll long long
#define M 1000000007
using namespace std;
ll modexp(int a, int b)//This function calculates a to the power b mod M
{
    ll res=1,y=a;
    while(b>0)
    {
        if(b&1)
            res=((res%M)*(y%M))%M;
        y=((y%M)*(y%M))%M;
        b/=2;
    }
    return res;
}
ll divisors  ( int n , int k)
{
    ll res=0;
    //cout<<n<<" = ";
    int i;
    for(i=1;i*i<n;i++)
    {
        if(n%i==0)
            res+= ( modexp(i,k) + modexp(n/i , k) );
    }

    if(i*i==n)
        res+=modexp(i,k);
    return res;
}
ll solve (int a , int b , int k )
{
    ll sum=0;
    for(int i=a;i<=b;i++)
    {
        sum+=divisors ( i,k );
    }
    return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,k;
        cin>>a>>b>>k;
         ll ans=solve( a, b , k);
        cout<<ans<<endl;
    }
    return 0;
}
