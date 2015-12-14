#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int t;
    double b1,b2,c1,c2,r,k1,ans1,k2,ans2;
    cin>>t;
    while(t--)
    {
        cout<<endl;
        cin>>b1>>b2;
        cin>>c1>>c2>>r;
        k1=(3.66-b2)/(52.5-b1);
        double sq=sqrt(k1*k1+1);
        ans1=abs((k1*c1-c2+3.66-52.5*k1))/sq;
        k2=(-3.66-b2)/(52.5-b1);
        sq=sqrt(k2*k2+1);
        ans2=(abs(k1*c1-c2-3.66-52.5*k2))/sq;
        if(ans1>=r||ans2>r)
            cout<<"Goal!"<<endl;
        else
            cout<<"No goal..."<<endl;

    }
    return 0;
}
