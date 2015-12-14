#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int l;
    cin>>l;
    while(l--)
    {
        string s;
        cin>>s;

        s="$"+s+"@";
        int n=s.length();
        int a[n+1];
        for(int i=0;i<=n;i++)
            a[i]=i;
        for(int i=1;i<=n;i++)
        {
            for(int j=0;i-j-1>=0&&i+j<n;j++)
            {
                if(s[i-j]==s[i+j])
                {
                    a[i+j]=min(a[i+j],a[i-j-1]+1);
                }
                else
                    break;
            }
            for(int j=0;i-j>=0&&i+j+1<n;j++)
            {
                if(s[i-j]==s[i+j+1])
                {
                    a[i+j+1]=min(a[i+j+1],a[i-j-1]);
                }
                else
                    break;
            }
            cout<<"iter   "<<i<<" = ";
            for(int i=0;i<n;i++)
                cout<<a[i]<<" ";
            cout<<endl;
         }

        cout<<a[l]<<endl;
    }
    return 0;
}
