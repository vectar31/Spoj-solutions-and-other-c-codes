#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long double a,ga,gb,gc,b,c,s,ss,r,G;
        cout<<setprecision(12);
        cin>>a>>ga>>gb>>gc;
        b=a*(ga/gb);
        c=a*(ga/gc);
        s=(a+b+c)/2;
        ss=sqrt(s*(s-a)*(s-b)*(s-c));
        r=a*b*c/4/ss;
        G=2*(sqrt(9*r*r-a*a-b*b-c*c))/3;
        std::cout << std::fixed << std::setprecision(3) <<ss<<" ";
        std::cout << std::fixed << std::setprecision(3) <<G<< std::endl;

    }
    return 0;
}
