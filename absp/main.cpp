#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        long long int sum=0;
        long long int a[t];
        for(int j=0;j<t;j++)
            cin>>a[j];

        int z=t-1;
        for(int j=0;j<t/2;j++)
        {
            sum=sum+z*(a[t-j-1]-a[j]);
            z=z-2;
        }
        cout<<sum<<endl;
    }
    return 0;
}
