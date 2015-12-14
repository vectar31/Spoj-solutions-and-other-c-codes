#include <iostream>
using namespace std;
int main()
{
    for(;;)
    {
        long long n;cin>>n;
        if (cin.eof()) return 0;
        long long f=9*(n/9);
        cout<<9*f+(n-f)*(n-f)<<endl;
    }
}
