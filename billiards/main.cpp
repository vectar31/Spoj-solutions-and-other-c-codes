#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double a,b,s,m,n;
    double x,y,p=4*atan(1);
    cin>>a>>b>>s>>m>>n;
    while(a!=0)
    {
        x=m*a/s;
        y=n*b/s;
        double z=atan(y/x)*180/p;
        double u=sqrt(x*x+y*y);
        std::cout << std::fixed << std::setprecision(2) <<z<<" ";
        std::cout << std::fixed << std::setprecision(2) <<u<< std::endl;
        cin>>a>>b>>s>>m>>n;
    }
    return 0;
}
