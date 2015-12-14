#include <iostream>
#include <iomanip>
using namespace std;
double min(double a , double b)
{
    if(a<b)
        return a;
    return b;
}
double max(double a , double b)
{
    if(a>b)
        return a;
    return b;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double T1,T2,t1,t2;
        cin>>T1>>T2>>t1>>t2;
        double w,w1,w2;
        //double T=min(T1,T2);
        //double TT=max(T1,T2);
        w1=double((t1)/(T1));
        w2=double((t2)/(T2));
        w1=(1.0-w1)*(1.0-w1);
        w2=(1.0-w2)*(1.0-w2);
        w=(w1+w2)/2.0;
        double ans=1-w;
        cout<<fixed<<setprecision(6)<<ans<<endl;
        //cout<<0.000000<<endl;
    }
    return 0;
}
