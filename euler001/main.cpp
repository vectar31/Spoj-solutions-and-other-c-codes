#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans=0;
        ll l3,l5,l15,s3,s5,s15;
        if(n%3==0)
            l3=n-3;
        else
            l3=n-(n%3);
        if(n%5==0)
            l5=n-5;
        else
            l5=n-(n%5);
        if(n%15==0)
            l15=n-15;
        else
            l15=n-(n%15);
        //cout<<l3<<" "<<l5<<" "<<l15<<endl;
        ll n3=l3/3;
        ll n5=l5/5;
        ll n15=l15/15;
        s3=n3*(3+l3)/2;
        s5=n5*(5+l5)/2;
        s15=n15*(15+l15)/2;
        ans=s3+s5-s15;
        cout<<ans<<endl;
    }
    return 0;
}
