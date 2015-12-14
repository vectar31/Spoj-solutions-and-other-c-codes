#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;int dif=(1<<30);
    cin>>n;
    int x=5000,y=1;
    ll ans=0;
    while(y<=x)
    {
        ll temp=x*(x+1)*y*(y+1)/4;
        if (dif > abs(temp-n))
        {
            ans=x*y;
            dif=abs(temp-n);
        }
        if(temp>n)
            x--;
        else
            y++;
    }
    cout<<ans<<endl;}
    return 0;
}
