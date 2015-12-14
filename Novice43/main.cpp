#include <bits/stdc++.h>

using namespace std;
int ans[]={1, 1, 2, 5, 15, 52, 203, 877, 4140, 21147, 115975, 678570};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<ans[n]<<endl;
    }
    return 0;
}
