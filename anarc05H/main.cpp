#include <bits/stdc++.h>

using namespace std;
int sum(string s)
{
    int res=0;
    for(int i=0;i<s.length();i++)
        res+=(s[i]-'0');
    return res;
}
int ans=0;
int solve(string s)
{
    int n=s.length();
    if(n==1)
        return 1;
    if(n==2)
    {
        if(s[0]<s[1])
            return 1;
        else
            return 0;
    }
    for(int i=1;i<=s.length();i++)
        ans+=(solve(s.substr(0,i))+solve(s.substr(i,n-i)));
    return ans;
}
int main()
{
    string s;
    cin>>s;
    while(s!="bye")
    {
        cout<<solve(s)<<endl;
    }
    return 0;
}
