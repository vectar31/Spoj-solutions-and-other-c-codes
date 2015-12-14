#include <iostream>

using namespace std;

int main()
{
    int g,b;
    cin>>g>>b;
    while(g!=-1)
    {
        if(g<b)
            g^=b^=g^=b;
        cout<<(g+b)/(b+1)<<endl;
        cin>>g>>b;
    }
    return 0;
}
