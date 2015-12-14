#include <bits/stdc++.h>
#define ll long long
#define N 5000001
ll a[N]={0};
using namespace std;

int main()
{
    int maxans=0;
    for(ll p=2;p<10000;p++)
    {
        int ans=0;
        for(ll a=2;a<(p/3);a++)
        {
            if(p*(p-2*a) % (2*(p-a)) == 0)
              ans++;
        }
        if(ans>maxans)
         {
             a[p]=p;
             maxans=ans;
         }
        else
            a[p]=a[p-1];
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<a[n]<<endl;
    }
    return 0;
}
