#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll sumpro(int n)
{
    ll ans=1;
    if(n==1)
        return 1;
    if(n==2)
        return 2;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                ans*=i;
                n/=i;
            }
        }
        if(n==1)
            break;
    }
    if(n!=1)
        ans=n;
    return ans;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
