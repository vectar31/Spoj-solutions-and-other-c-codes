#include <iostream>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    for(long long int i=0;i<t;i++)
    {
        long long int n;
        cin>>n;
        long long int s;
        s=192+(n-1)*250;
        cout<<s<<endl;
    }
    return 0;
}
