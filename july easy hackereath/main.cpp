#include <bits/stdc++.h>
#define ll long long
#define N 1000001
using namespace std;
int a[N];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ne=0,no=0,n1=0,n2=0,sub=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
                ne++;
            else
                no++;
        }
        sort(a,a+n);
        for(int i=0;i<n;)
        {
            int k=0;
            int p=a[i];
            while(a[i]==p && i<n)
            {
                //cout<<1<<endl;
                k++;
                i++;
            }
            if(k>1)
                {
                    sub+=(k*(k-1)/2);
                    //cout<<1<<endl;
                }
        }
        //cout<<no<<" "<<ne<<" "<<sub<<endl;
        int ans=0;
        ans= (ne*(ne-1)/2)+((no-1)*no/2)-sub;
        cout<<ans<<endl;

    }
    //cout<<endl;
    return 0;
}
