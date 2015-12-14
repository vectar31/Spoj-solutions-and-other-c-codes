#include <bits/stdc++.h>

using namespace std;
int solve(string s)
{
    int n=s.length();
    string t=string(s.rbegin(),s.rend());
    if(n==1)
        return 0;
    if(t==s)
        return ((n/2)+solve(s.substr(0,n/2)));
    return solve(s.substr(0,n-1))+solve(s.substr(1,n-1));
}
int main()
{
    string s="malayalam";
    int t=solve(s);
    cout<<t<<endl;
    return 0;
}
