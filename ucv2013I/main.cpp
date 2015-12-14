#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double pi=acos(-1.0);
    double r,n;
    cin>>r>>n;
    while(r!=0&&n!=0)
    {
        double theta=(n-1)*pi/(2.0*n);
        double R=(r/cos(theta));
        cout<<fixed<<setprecision(2)<<R<<endl;
        cin>>r>>n;
    }
    return 0;
}
