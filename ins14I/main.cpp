#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<5)
        {
            if(n==0)
                cout<<4<<endl;
            else
                cout<<5<<endl;
        }
        else
        {
            double den;
            den=(3.0+(2*sqrt(2.0)));
            double temp=ceil(n/den);
            double temp2=floor(temp*den);
            if(temp2==n)
                cout<<4<<endl;
            else
                cout<<5<<endl;
        }
    }
    return 0;
}
