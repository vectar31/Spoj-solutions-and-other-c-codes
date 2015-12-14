#include <iostream>

using namespace std;

int main()
{
    int t=1;
    string x;
    while(cin>>x)
    {
        x="0"+x;
        int c=0;
        for(int i=1;i<x.length();i++)
        {
            if(x[i]!=x[i-1])
                c+=1;
        }
        cout<<"Game #"<<t<<": "<<c<<endl;
        t+=1;
    }
    return 0;
}
