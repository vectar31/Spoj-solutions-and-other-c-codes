#include <iostream>
#include <cmath>
using namespace std;
long long cal(int n)//recursive function
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    if(n==2)
        return 3;
    return (2*cal(n-1)+1);
}
int main()
{
    double n;
    cin>>n;
    double ans=pow(2.0,n)-1;
    cout<<ans<<endl;
    long long n2;
    cin>>n2;
    cout<<"Using recursion "<<cal(n2)<<endl;
}
