#include <iostream>
#include <algorithm>
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
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[j]==a[i]*2)
                {
                    ans++;
                    a[i]=-1;
                    a[j]=-1;
                    break;
                }
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}
