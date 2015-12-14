#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin>>n;
    double s[n][4];
    for(int i=0;i<n;i++)
    {
        double a,b,c,d;
        cin>>a>>b>>c>>d;
        s[i][0]=a;
        s[i][1]=b;
        s[i][2]=c;
        s[i][3]=d;

    }
    for(int i=0;i<n;i++)
    {
        double a,b,c,d;
        a=s[i][0];
        b=s[i][1];
        c=s[i][2];
        d=s[i][3];
        double ss=(a+b+c+d)/2;
        double sss=(ss-a)*(ss-b)*(ss-c)*(ss-d);
        double r=sqrt(sss);
        cout.setprecision(2)<<r<<endl;
    }
    return 0;
}
