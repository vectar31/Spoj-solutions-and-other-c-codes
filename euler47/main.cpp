#include <bits/stdc++.h>
#define N 2000001
using namespace std;
bool prime[N];
bool primes[N];
int primecount(int n)
{
    int ans=0;
    int temp=n;
    for(int i=0;primes[i]<=n;i++)
    {
            if(n%primes[i]==0)
            {
                ans+=1;
                while(n%primes[i]==0)
                    n/=primes[i];
            }
    }
    return ans;
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
    int n,k,c=0;
    for(int i=2;i<N;i++)
        if(prime[i])
            primes[c++]=i;
    cin>>n>>k;
    int a;
    if(k==2)
        a=6;
    if(k==3||k==4)
        a=644;

    for(int i=a;i<=n;i++)
    {
        //cout<<i<<" "<<primecount(i)<<endl;
        bool f=1;
        for(int j=i;j<i+k;j++)
        {
            if(primecount(j)!=k)
            {
                f=0;
                break;
            }
        }
        if(f)
            printf("%d\n",i);
    }
    return 0;
}
