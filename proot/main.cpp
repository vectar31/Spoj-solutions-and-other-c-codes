#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double s;
        cin>>s;
        double a=s/2;
        if(s>1)
        {
            double as=sqrt(a);
            as=as*as*as;
            as=4.0*as/3.0;
            as=as/(s*s);
            double ans=1-as;
            cout<<fixed<<setprecision(6)<<ans<<endl;
        }

    }
    return 0;
}
