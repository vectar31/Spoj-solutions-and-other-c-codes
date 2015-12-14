#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll stud[100001];
ll price[100001];
int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
        for(int i=0;i<n;i++)
            cin>>stud[i];
        for(int i=0;i<n;i++)
            cin>>price[i];
        sort(stud,stud+n);
        sort(price,price+n);
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=(stud[i]*price[n-i-1]);
        }
        cout<<ans<<endl;
        cin>>n;
    }
    return 0;
}
