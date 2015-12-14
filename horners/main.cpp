#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,y,r,X,Y,R;
        cin>>x>>y>>r>>X>>Y>>R;
        double d=sqrt(pow(X-x,2)+pow(Y-y,2));
        cout<<d<<endl;
        double a=r*r*acos((d*d+r*r-R*R)/(2*d*r))+R*R*acos((d*d+R*R-r*r)/(2*d*R))+(sqrt((d+r+R)*(-d+r+R)*(d-r*R)*(d+r-R)))/2;
        cout<<a<<endl;
        double A=3.1415926*R*R-a;
        //cout<<A<<endl;
    }
    return 0;
}
