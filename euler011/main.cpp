#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int n=20;
    ll a[20][20];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        cin>>a[i][j];
    ll ans=0;
    for(int i=0;i<=16;i++)
    {
        for(int j=0;j<=16;j++)
        {
            ll p1=(a[i][j]*a[i+1][j])*(a[i+2][j]*a[i+3][j]);
            ll p2=(a[i][j]*a[i][j+1])*(a[i][j+1]*a[i][j+1]);
            ll p3=(a[i][j]*a[i+1][j+1])*(a[i+2][j+2]*a[i+3][j+3]);
            if(p1>ans)
                {ans=p1;cout<<i<<","<<j<<" 1-> ";cout<<a[i][j]<<" "<<a[i+1][j]<<" "<<a[i+2][j]<<" "<<a[i+3][j]<<endl;cout<<ans<<" "<<endl;}
            if(p2>ans)
                {ans=p2;cout<<i<<","<<j<<" 2-> ";cout<<a[i][j]<<" "<<a[i][j+1]<<" "<<a[i][j+2]<<" "<<a[i][j+3]<<endl;cout<<ans<<" "<<endl;}
            if(p3>ans)
                {ans=p3;cout<<i<<","<<j<<" 3-> ";cout<<a[i][j]<<" "<<a[i+1][j+1]<<" "<<a[i+2][j+2]<<" "<<a[i+3][j+3]<<endl;cout<<ans<<" "<<endl;}
        }
    }
    for(int i=3;i<20;i++)
    {
        for(int j=3;j<20;j++)
        {
            ll p4=(a[i][j]*a[i-1][j-1])*(a[i-2][j-2]*a[i-3][j-3]);
            if(p4>ans)
                {ans=p4;cout<<i<<","<<j<<" 4-> ";cout<<a[i][j]<<" "<<a[i-1][j-1]<<" "<<a[i-2][j-2]<<" "<<a[i-3][j-3]<<endl;cout<<ans<<" "<<endl;}
        }
    }
    cout<<ans<<endl;
    return 0;
}
