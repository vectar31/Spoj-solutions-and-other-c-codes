#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int f=1,n,p,q;
    cin>>n>>p>>q;
    double ans=(double)(q+1)/(p+2);
    cout<<"Case "<<f++<<": "<<fixed<<setprecision(4)<<ans<<endl;
    return 0;
}
