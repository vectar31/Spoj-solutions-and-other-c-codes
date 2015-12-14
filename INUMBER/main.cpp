#include <bits/stdc++.h>
#define ll long long

using namespace std;

int sum (ll n)
{
    int s=0;
    while(n>0)
    {
        s+=(n%10);
        n/=10;
    }
    return s;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(ll i=n; ;i+=n)
        {
            if(sum(i)==n)
                if(i%n==0)
            {

                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}
