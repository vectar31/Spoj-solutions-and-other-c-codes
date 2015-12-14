#include <iostream>
#define in long long int
using namespace std;

int main()
{
    in t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<(((n-1)/2)*((n-1)/2)%n)<<endl;
    }
    return 0;
}
