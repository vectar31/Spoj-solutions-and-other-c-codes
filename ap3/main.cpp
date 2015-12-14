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
        unsigned long long int a,b,c;
        cin>>a>>b>>c;
        unsigned long long int n, d,f,g,h;
        if(a==b)
        {
            d=0;
            f=a;
            n=c/a;
        }
        else
        {
            g=a+b;
            h=-7.0*a-5.0*b-2.0*c;
            unsigned long long int z=sqrt(h*h-48.0*g*c);
            n=(-h+z)/(2.0*g);
            d=(b-a)/(n-6.0);
            f=a-2*d;
        }
        cout<<n<<endl;
        cout<<f;
        for(int j=1;j<n;j++)
        {
            unsigned long long int x=(f+j*d);
            cout<<" "<<x;
        }
        cout<<endl;
    }

}
