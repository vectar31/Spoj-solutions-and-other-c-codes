#include <iostream>
#include <cmath>
using namespace std;
long long cal(int n)
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
    long long n;
    cout<<"recursion se karo"<<endl;
    cin>>n;
    cout<<(cal(n))<<endl;
}
