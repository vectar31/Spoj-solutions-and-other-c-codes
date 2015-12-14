#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long double v,s,a;
    for(int i=0;i<t;i++)
    {
        cin>>v;
        long double z=0.33333333333333333;
        //cout<<z<<endl;
        a=pow(4*v,z);
        s=3*a*a*sqrt(3)/2;
        std::cout << std::fixed << std::setprecision(10) <<s<< std::endl;

    }
    return 0;
}
