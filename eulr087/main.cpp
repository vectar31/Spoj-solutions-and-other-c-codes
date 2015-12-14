#include <bits/stdc++.h>
#define N 7080
#define NN 10000001
#define ll long long
using namespace std;
bool check[NN]={0};
bool prime[N];
int primes[N];
int p2[N];
int ans[NN]={0};
int main()
{
    for(int i=0;i<N;i++)
        prime[i]=1;
    prime [0]=0;prime[1]=0;
    for(int i=2;i*i<=N;i++)
        if(prime[i])
            for(int j=2;i*j<=N;j++)
                prime[i*j]=0;
    int c=0;
    for(int i=2;i<N;i++)
        if(prime[i])
        primes[c++]=i;
    int d=0;
    for(int i=0; ;i++)
    {
        int p=primes[i];
        p=p*p;
        if(p>NN)
            break;
        p2[d++]=p;
    }
    for(int i=28;i<1000000;i++)
    {
        int n = i;
        bool f=0;
        for(int j=0;j<c;j++)
        {
            int a=primes[j];
            a=a*a*a*a;
            if(a>=n)
                break;
            for(int k=0;k<c;k++)
            {
                int b=primes[k];
                b=b*b*b;
                if(b>=(n-a))
                    break;
                //cout<<a<<" "<<b<<endl;
                b=n-(a+b);
                //cout<<b<<endl;
                if(binary_search(p2,p2+d,b))
                {
                    f=1;
                    break;

                }
            }
            if(f)
                break;
        }
        //cout<<f<<endl;
        check[i]=f;
    }
    //for(int i=20;i<50;i++)
      //cout<<i<<" "<<check[i]<<endl;
    for(int i=0;i<NN;i++)
    {
        if(check[i])
            ans[i]=ans[i-1]+1;
        else
            ans[i]=ans[i-1];
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<ans[n]<<endl;
    }
    return 0;
}
