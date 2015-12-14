#include <iostream>

using namespace std;
bool fr[10000]={false};
int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        int m;
        cin>>m;
        for(int i=0;i<m;i++)
        {
            int f;
            cin>>f;
            fr[f]=1;
        }
    }
    for(int i=0;i<n;i++)
        fr[a[i]]=0;
    int ans=0;
    for(int i=0;i<=9999;i++)
    {
        if(fr[i]==true)
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}
