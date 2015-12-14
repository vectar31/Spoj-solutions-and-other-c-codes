#include <algorithm>
#include <iostream>
#define M 1000000007
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        long long ans=1;//bool f=1;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]-i<=0)
            {
                ans=0;
                break;
            }
            ans=(ans*(a[i]-i))%M;
        }
        cout<<ans<<endl;
    }
    cout<<"KILL BATMAN"<<endl;
    return 0;
}
