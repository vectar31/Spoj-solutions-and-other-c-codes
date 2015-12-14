#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        double hx,hy,kx,ky;
        cin>>hx>>hy>>kx>>ky;
        double x,y,z,a,b,c,d;
        a=(hx+kx);
        a=a*a;
        b=(1+(hy/ky));
        b=b*b;
        c=ky*ky;
        d=(a/b)+c;
        z=sqrt(d);
        x=z*((1+(hy/ky)))/((1+(kx/hx)));
        y=(z*hy/ky)-x;
        double ans=x+y+z;
        cout<<"Case "<<i<<": ";
        cout<<fixed<<setprecision(6)<<ans<<endl;
    }
    return 0;
}
