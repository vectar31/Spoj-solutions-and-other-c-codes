#include <bits/stdc++.h>


using namespace std;

int main()
{
    int t;
    cin>>t;
    int c=1;
    while(t--)
    {
        double x1, y1, x2, y2, a,l;
        cin>>x1>>y1>>x2>>y2>>a>>l;
        double temp = sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
        double temp2 = (temp*temp + a*a - (l/sqrt(2.0))*(l/sqrt(2.0)) ) / ( 2.0 * temp * a);
        if(temp2<1)
            cout<<(c++)<<". "<<fixed<<setprecision(3)<<2*a*sqrt(1.0-temp2*temp2)<<endl;
        else
            cout<<(c++)<<". No problem"<<endl;
    }
    return 0;
}
