#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        long f=1;
        for(int j=2;j<=a[i];j++)
           f=f*j;
        cout<<f<<endl;
    }
    return 0;
}
