#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double X,Y;
        cin>>X>>Y;
        double ans=2.0*sqrt(X*X-Y*Y);
        cout<<fixed<<setprecision(3)<<ans<<endl;

    }
    return 0;
}
