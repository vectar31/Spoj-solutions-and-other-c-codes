#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n],ans=0;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int check=a[n-1];
    for(int i=0;i<n;i++)
        if(check>=(a[i]+k))
            if(binary_search(a,a+n,a[i]+k))
                ans++;
    cout<<ans<<endl;
    return 0;
}
