#include <iostream>
#define ll unsigned long long int
using namespace std;
ll fact[65];
ll ans[65];
int main()
{
    fact[0]=fact[1]=1;
    for(int i=2;i<=64;i+=1)
        {
            fact[i]=fact[i-1]*i;
            cout<<fact[i]<<endl;
        }
    ans[0]=ans[1]=0;ans[2]=ans[3]=1;ans[4]=ans[5]=4;
    for(int i=6;i<=62;i+=2)
    {
        ans[i]=(ans[i-1])+((fact[i-1]/(fact[(i-1)/2]*fact[(i+1)/2])));
        ans[i+1]=ans[i];
        cout<<((fact[i-1]/(fact[(i-1)/2]*fact[(i+1)/2])))<<" "<<ans[i]<<endl;
    }
    for(int i=1;i<=60;i++)
        cout<<ans[i]<<endl;
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll in=1;
        int i;
        for(i=1; ;i++)
        {
            in*=2;
            if(in == n)
                break;
        }
        cout<<ans[i]<<endl;
    }

    return 0;
}
