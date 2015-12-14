#include <iostream>
#define ll unsigned long long int
using namespace std;
int main()
{
    ll ans[65];
    ll cal[65][10];
    ll sum=0;
    for(int i=0;i<10;i++)
    {
        cal[0][i]=0;
        cal[1][i]=1;
        sum+= cal[1][i];
    }
    //cout<<sum<<endl;
    ans[0]=0;
    ans[1]=10;
    for(int i=2;i<=64;i++)
    {
        cal[i][0]=sum;
        for(int j=1;j<=9;j++)
        {
            cal[i][j]=cal[i][j-1]-cal[i-1][j-1];
            sum+=cal[i][j];

        }
        ans[i]=sum;
    }
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int a,n;
        cin>>a>>n;
        cout<<i<<" "<<ans[n]<<endl;
    }
    return 0;
}
