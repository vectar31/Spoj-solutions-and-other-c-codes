#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long n;
    cin>>n;
    cout<<endl;
    long a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        long c=0,s=0;
        for(int j=1; ;j++)
        {
            c=pow(5,j);
            if((a[i]/c)!=0)
            s=s+(a[i]/c);
            else
            break;

        }
        cout<<s<<endl;
    }
    return 0;
}
