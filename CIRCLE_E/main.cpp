#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin>>n;
    double s[n][3];
    for(int i=0;i<n;i++)
    {
        double a,b,c;
        cin>>a>>b>>c;
        s[i][0]=a;
        s[i][1]=b;
        s[i][2]=c;
    }
    for(int i=0;i<n;i++)
    {
        double a,b,c,p,q,r,f;
        a=s[i][0];
        b=s[i][1];
        c=s[i][2];
        p=a+b+c;
        q=(a*b)+(b*c)+(a*c);
        r=a*b*c;
        f=r/(q+(2*sqrt(p*r)));

        std::cout << std::fixed << std::setprecision(6) << f<< std::endl;
    }
    return 0;

}
