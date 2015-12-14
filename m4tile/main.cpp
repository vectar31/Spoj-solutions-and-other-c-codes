//T(n)=4*T(n-2)-T(n-4)
#include <iostream>
#define in long long
using namespace std;
in a[1001];
int main()
{
    a[0]=1;a[1]=1;a[2]=5;a[3]=11;
    for(int i=4;i<=1000;i+=1)
        a[i]=a[i-1]+5*a[i-2]+a[i-3]-a[i-4];
    int t,n;cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        cout<<i<<" "<<a[n]<<endl;
    }
    return 0;
}
