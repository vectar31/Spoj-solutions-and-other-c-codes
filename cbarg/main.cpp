#include <iostream>
#define inf (1<<20)
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
        {
            cin>>a[i];
        }
        long long  ans=a[0];
        for(int i=1;i<n;i++)
        {
            if(a[i]>a[i-1])
                ans+=(a[i]-a[i-1]);

        }
        cout<<ans<<endl;
    }
    return 0;
}
