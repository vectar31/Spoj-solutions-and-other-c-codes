#include <iostream>
#include <cmath>
using namespace std;
long long int factorial(int n)
{
    long long int f=1;
    for(int i=1;i<=n;i++)
        f*=i;
    return f;
}
long long int power(int n)
{
    int p=1;
    for(int i=1;i<=n;i++)
        p*=2;
    return p;
}
int main()
{

    int n;
    cin>>n;
    long long int  m=power(n)-n+factorial(n);
    cout<<m<<endl;
    return 0;
}
