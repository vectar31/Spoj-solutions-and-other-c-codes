#include <iostream>
using namespace std;
int main()
{
    int n,s,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        if(s==0)
            cout<<"Airborne wins."<<endl;
        else
            cout<<"Pagfloyd wins."<<endl;
    }
    return 0;
}
