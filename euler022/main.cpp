#include <bits/stdc++.h>

using namespace std;
int sum (string s)
{
    int res=0;
    int n=s.length();
    for(int i=0;i<s.length();i++)
    {
        res+=(s[i]-'A'+1);
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    map<string,int> m;map<string,int>::iterator it;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        m[s]=sum(s);
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        string s;
        cin>>s;
        it=m.find(s);
        int ans=distance(m.begin(),it) + 1;
        cout<<ans*it->second<<endl;
    }
    return 0;
}
