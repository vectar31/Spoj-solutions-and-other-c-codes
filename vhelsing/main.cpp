#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdio>
using namespace std;
int main()
{
    double root2=sqrt(2.0);
    int t;
    cin>>t;
    while(t--)
    {
        double r;
        cin>>r;
        double r3 = r*r*r;
        double a=2.0-root2;
        double ans=8.0 * a * r3 ;
        cout<<fixed<<setprecision(4)<<ans<<endl;

    }
    return 0;
}
