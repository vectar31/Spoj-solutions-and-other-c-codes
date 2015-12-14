#include <bits/stdc++.h>
#define N 1000

using namespace std;
int ans[]={ 0 , 1, 1, 1, 4, 6, 19, 43, 120, 307, 866, 2336, 6588, 18373, 52119, 147700, 422016};
int main()
{
    int t;
    cin>>t;
    int n;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        cout<<"Case #"<<i<<": "<<ans[n]<<endl;
    }
    return 0;
}
