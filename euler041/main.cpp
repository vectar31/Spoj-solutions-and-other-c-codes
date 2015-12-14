#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll prime[5000];
bool check(string s)
{
    istringstream is(s);
    ll a;
    is>>a;
    if(a%2==0)
        return false;
    for(ll i=3;i*i<=a;i++)
        if(a%i==0)
        return false;
    return true;
}
int main()
{
    int c=0;
    string s="1234";
    while(next_permutation(s.begin(),s.end()))
        if(check(s))
        {
            istringstream is(s);
            ll a;
            is>>a;
            prime[c++]=a;
        }
    s="1234567";
    while(next_permutation(s.begin(),s.end()))
        if(check(s))
        {
            istringstream is(s);
            ll a;
            is>>a;
            prime[c++]=a;
        }
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n<1423)
            cout<<-1<<endl;
        else
        {
            for(int i=c-1;i>=0;i--)
            {
                if(prime[i]<=n)
                {
                    cout<<prime[i]<<endl;
                    break;
                }
            }
        }


    }
    return 0;
}
