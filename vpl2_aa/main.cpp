#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int p0,p1,t,p;
        cin>>p0>>p1>>t>>p;
        double a=t*log(p/(double)p0)/log(p1/(double)p0);
        cout<<"Scenario #"<<i<<": "<<fixed<<setprecision(2)<<a<<endl;
    }
    return 0;
}
