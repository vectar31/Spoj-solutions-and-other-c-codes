#include <iostream>
#include <iomanip>
#define in long double

using namespace std;

int main()
{
    int t;in r,s;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>r;
        s=4*r*r+0.25;
        cout<<"Case "<<i+1<<": ";
        cout<<fixed<<setprecision(2)<<s<<endl;
    }
    return 0;
}
