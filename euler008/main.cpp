#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
            int ans=0;
        for(int i=0;i<n-6;i++)
        {
            int p=1;
            for(int j=i;j<i+k;j++)
                p*=(s[j]-'0');
            if(p>ans)
                ans=p;
        }
        cout<<ans<<endl;
    }
    return 0;
}
