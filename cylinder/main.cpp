#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    double w,h,r, r1, r2, pi = 4*atan(1.0),e = 1e-9,ans=0.0;
    cin>>w>>h;
    while(w!=0)
    {
        r = min(w/2.0, h/(2.0*pi+2.0));
		r1 = pi*r*r*w;
		r = w / (2.0*pi);
		r2 = pi*r*r*(h-2.0*r);
		ans=max(r1, r2) + e;
		cout<<fixed<<setprecision(3)<<ans<<endl;
        cin>>w>>h;
    }
    return 0;
}
