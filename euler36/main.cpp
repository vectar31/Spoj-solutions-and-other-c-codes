#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool check(int n , int k)
{
    string s="";
    while(n!=0)
    {
        int a=n%k;
        s=char(a+48)+s;
        n/=k;
    }
    string t=string(s.rbegin(),s.rend());
    if(s==t)
        return true;
    else
        return false;
}
bool checkpal(int n)
{
    int temp=n;
    int c=0;
    while(temp!=0)
    {
        c=(c*10)+(temp%10);
        temp/=10;
    }
    if(c==n)
        return true;
    else
        return false;
}
int main()
{
    //cout<<checkpal(12321)<<endl;
    int n;
    int k;
    cin>>n>>k;
    ll ans=0;
    for(int i=1;i<n;i++)
    {
        if(checkpal(i))
        {
            if(check(i,k))
                ans+=i;
        }
    }
    cout<<ans<<endl;
    return 0;
}
