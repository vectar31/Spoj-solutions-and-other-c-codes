#include <bits/stdc++.h>
#define N 50010
using namespace std;
int a[N];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        long long ans=0;
        for(long long i=0;i<n;i++)
        {
            long long c=1;
            while(i<n-1 && a[i]==a[i+1])
            {
                c++;
                i++;
            }
            ans+=((i+1)*c);
        }
        cout<<ans<<endl;
    }
    return 0;
}
