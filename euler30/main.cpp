#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool check(int n)
{
    int t=n;
    ll  c=0;
    while(n!=0)
    {
        int a=n%10;
        c+=(a*a*a*a*a*a);
        n/=10;
    }
    if(c==t)
        return true;
    return false;
}
int main()
{
    int ans=0;
    int a=(1<<22);
    int b=(1<<30);
    for(int i=a;i<b;i++)
        if(check(i))
            ans+=i;
    cout<<ans<<endl;
    return 0;
}
