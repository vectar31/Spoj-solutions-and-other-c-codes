#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double p,i,c;int t=1;
    cin>>p>>i>>c;
    while(p!=0)
    {
        double ans=p;
        double r=(i/100.0)/c;
        for(int i=1;i<=c;i++)
            ans=int(100.0*ans*(1+r)+1e-8)/100.0;
        cout<<"Case "<<t<<". $"<<fixed<<setprecision(2)<<p<<" at "<<fixed<<setprecision(2)<<i<<"% APR compounded "<<int(c)<<" times yields $"<<fixed<<setprecision(2)<<ans<<endl;
        t+=1;
        cin>>p>>i>>c;
    }
    return 0;
}
