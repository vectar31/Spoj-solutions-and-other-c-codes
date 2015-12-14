#include <iostream>
#include <cmath>
using namespace std;
bool pri(long f)
{
    int c=0;long i=3,g=1;
    while((i*i)<f)
    {
        c=0;
        while((f%i)==0)
        {
            c++;
            f=f/i;
        }
        if((c%2)!=0)
            return false;
        else
        {i=(4*g)+3;g=g+1;}
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    long a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        long t=a[i];
        if(pri(t)==true)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    }
    return 0;
}
