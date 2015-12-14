#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        long long m=a[i];long long z;
        if((m%2)==0)
        z=((m)*(m+2)*(2*m+1)/8);
        else
        z=(((m)*(m+2)*(2*m+1))-1)/8;
        cout<<z<<endl;
    }
    return 0;
}
