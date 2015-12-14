#include <iostream>
#include <algorithm>
using namespace std;
void hcf(int a,int b)
{
    while(b) b ^= a ^= b ^= a %= b;
	cout<<a<<endl;
}
int main()
{
    int n,m;cin>>n>>m;
    hcf(m,n);
    /*long long int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);int p=a[1]-a[0];int c=0;
    for(int i=1;i<n;i++)
    p=hcf(p,a[i]-a[i-1]);
    for(int i=1;i<n;i++)
    c=c+(a[i]-a[i-1])/p-1;
    cout<<c<<endl;*/
    return 0;
}
