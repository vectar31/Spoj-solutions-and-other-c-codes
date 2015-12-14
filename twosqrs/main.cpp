
#include <iostream>
#define ll long long
#define N 10000001
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
        ll n;
        cin>>n;
        bool ans=1;
        for(ll i=2;i*i<=n;i++)
        {
            cout<<i<<" "<<n<<endl;
            if(prime[i] && n%i==0 &&(i-3)%4==0 && i>=3)
            {
                int c=0;
                while(1)
                {
                    c++;
                    n/=i;
                    cout<<i<<" "<<n<<endl;
                    if(n%i!=0)
                        break;
                }
                if(c%2!=0)
                {
                    ans=0;
                    break;
                }
            }
            else if(prime[i] && n%i==0)
                while(n%i==0)
                    n/=i;
        }
        if(prime[n]&&(n-3)%4==0)
            ans=0;
        if(ans)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
