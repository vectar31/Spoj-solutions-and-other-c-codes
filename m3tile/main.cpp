//T(n)=4*T(n-2)-T(n-4)
#include <iostream>
#define in long long
using namespace std;
in a[31]={-1};
int main()
{
    a[0]=0;a[2]=3;a[4]=11;
    for(int i=6;i<=30;i+=2)
        a[i]=4*a[i-2]-a[i-4];
    int n;cin>>n;
    while(n!=-1)
    {
        cout<<a[n]<<endl;
        cin>>n;
    }
    return 0;
}
