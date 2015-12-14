#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
     long long int a;
    for(int i=1;i<=t;i++)
    {
        cin>>a;
        long long int s=sqrt(a);
        if(a*a==s*s)//(ceil(sqrt((double)a))==(floor(sqrt((double)a))))
            cout<<"Case "<<i<<": Yes"<<endl;
        else
            cout<<"Case "<<i<<": No"<<endl;
    }
    return 0;
}
