#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,k,s,sum=0;
    int a[1001];
    cin>>n>>k>>s;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int t=k*s;
    sort(a,a+n);
    int i=n-1;
    while(sum<t)

    {
        sum=sum+a[i--];
    }
    cout<<n-i-1<<endl;
    return 0;
}
