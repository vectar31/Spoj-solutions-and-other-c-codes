#include <iostream>
#define in long long
using namespace std;
in a[100000001];
int main()
{
    in n,m;
    while(1){cin>>n>>m;
    a[0]=0;a[1]=1;
    for(in i=2;i<=n;i++)
        a[i]=((a[i-1])%m+(a[i-2])%m)%m;
    cout<<a[n]<<endl;}
    return 0;
}
