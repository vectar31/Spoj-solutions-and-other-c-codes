#include <iostream>
#include <iomanip>
#include <cmath>
#define r3 1.7320508075688772935274463415059
using namespace std;

int main()
{
    int t;
    double a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        double s=(a+b+c)/2.0;
        double area = sqrt(s*(s-a)*(s-b)*(s-c));
        double ans=(0.5)*(((a*a+b*b+c*c)*(r3/4.0))+(3*area));
        cout<<fixed<<setprecision(2)<<ans<<endl;
    }
    return 0;
}
