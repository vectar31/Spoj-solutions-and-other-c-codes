#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;int b;
        cin>>a>>b;
        if((a&1)&&(b&1))
            cout<<"Ramesh"<<endl;
        else
            cout<<"Suresh"<<endl;
    }
    return 0;
}
