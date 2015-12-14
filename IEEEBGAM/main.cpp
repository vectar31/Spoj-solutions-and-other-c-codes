#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        double n;
        cin>>n;
        cout<<fixed<<setprecision(8)<<(n-1)/n + 1/(n*(n+1))<<endl;
    }
    return 0;
}
