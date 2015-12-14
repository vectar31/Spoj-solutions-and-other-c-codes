#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool check(string s,int k)
{
    char d='8';
    if(k==9)
        d='9';
    for(char c='1';c<=d;c++)
        if(s.find(c)==string::npos)
            return false;
    return true;
}
string convert(ll n)
{
    string s="";
    while(n!=0)
    {
        s=(char((n%10)+48))+s;
        n/=10;
    }
    return s;
}
int main()
{
    //cout<<convert(1234)<<endl;
    int n,k;
    cin>>n>>k;
    for(int i=2;i<n;i++)
    {
        //bool f=1;
        ll temp=0;
        string s="";
        for(int j=1; ;j++)
        {
            temp=(i*j);
            s=s+convert(temp);
            if(s.length()>k)
                break;
            if(check(s,k))
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}
