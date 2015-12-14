#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;
int main()
{
    int t,noi;
    cin>>t;
    while(t--)
    {
        double a,b,c,x1,x2;
        cin>>a>>b>>c;
        x1--;x2 = c/a;noi= 6;
        while(x2!=x1 && noi--)
        {
            x1 = x2;
            x2 = x1 - ( a*x1 + b*sin(x1) - c )/ ( a + b*cos(x1) );
        }
        cout<<fixed<<setprecision(6)<<x2<<endl;
    }
    return 0;
}
