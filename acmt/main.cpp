#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int e,n;
        cin>>e>>n;
        int a=e,b=n,ans;
        if(e<n)
            swap(a,b);
        if(b>a/2)
            ans=(e+n)/3;
        else
            ans=b;
        cout<<ans<<endl;
    }
    return 0;
}
