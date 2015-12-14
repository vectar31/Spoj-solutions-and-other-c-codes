#include <iostream>
#include <cmath>
#define N 10001
#define ll long long
using namespace std;
bool prime[N];
int k,pf[N],powers[N];
void primefactors(int n)
{
    k=0;
    for(int i=2;i<N;i++)
        if(prime[i])
            if(n%i==0)
                pf[k++]=i;
}
ll power(int a,int b,int m)
{
    ll res=1,y=a;
    while(b>0)
    {
        if(b&1)
            res=((res%m)*(y%m))%m;
        y=((y%m)*(y%m))%m;
        b/=2;
    }
    return res;
}
int gcd(int a , int b)
{
    while(b)
        b^=a^=b^=a%=b;
    return a;
}
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
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        if(!prime[n])
            cout<<i<<":NOTPRIME"<<endl;
        else
        {
            int phi=n-1;
            primefactors(phi);
            for(int j=0;j<k;j++)
                powers[j]=phi/pf[j];
            bool f=1;
            int j;
            for(j=2; ;j++)
            {
                for(int p=0;p<k;p++)
                {
                    //cout<<j<<" "<<powers[p]<<" "<<power(j,powers[p],n)<<endl;
                    if(power(j,powers[p],n)==1)
                    {
                        f=0;
                        break;
                    }
                }
                if(f)
                    break;
                f=1;
            }
           int p1=j;
            ll ans=j;
            for(j=2;j<n;j++)
            {
                if((gcd(j,phi))==1)
                    ans=((ans%n)*(power(p1,j,n)%n))%n;
            }
            cout<<i<<":"<<ans<<endl;

        }

    }
    return 0;
}
