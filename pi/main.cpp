#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    cout<<"3.";
    int a=11080585,b=78256779;
    for(long long int i=0;i<34;i++)
    {
        if(a>b)
        {
            cout<<(a/b);
        }
        a=(a%b)*10;
        if(a<b)
        {
            cout<<"0";
            a=a*10;
        }

    }
    return 0;
}
