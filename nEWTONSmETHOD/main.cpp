#include <iostream>
#include<iomanip>
using namespace std;
long double funct(long double x1){
    return (x1*x1 - 2);
}
long double derFunct(long double x1){
    return 2*x1;
}
int main()
{
    long double x1;
    x1 = 2;
    for(int i=0;i<100;++i)
    {
        x1 = x1 - funct(x1)/derFunct(x1);
    }
    cout<< setprecision(25) << x1<< endl;
    return 0;
}
