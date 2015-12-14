#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    while(a!=c)
    {
        if((2*b)==(a+c))
            cout<<"AP "<<(c+b-a)<<endl;
        else
            cout<<"GP "<<(c*(b/a))<<endl;
        cin>>a>>b>>c;
    }
    return 0;
}
