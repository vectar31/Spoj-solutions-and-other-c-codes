#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],d[n];
        for(int i=0;i<n;i++)
            cin>>a[i]>>d[i];
        sort(a,a+n);
        sort(d,d+n);
        int i=0,j=0;
        int ans=0,temp=0;
        while(i<n&&j<n)
        {
            if(a[i]<d[j])
            {
                temp++;
                i++;
                if(ans<temp)
                    ans=temp;
            }
            else
            {
                if(ans<temp)
                    ans=temp;
                temp--;
                j++;
            }
        }
        if(ans<temp)
                    ans=temp;
        cout<<ans<<endl;
    }
    return 0;
}
