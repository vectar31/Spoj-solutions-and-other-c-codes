#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double x,err;
    cin>>x>>err;
    double k=1,ex=1,f=1,term=0.0;
    for(k=1; ;k++)
    {
        f=f*k;
        term=pow(x,k)/f;
        ex+=term;
        if(term<=err)
            break;
    }
    cout<<fixed<<setprecision(5)<<ex<<endl;
    cout<<k+1<<endl;
    return 0;
}
