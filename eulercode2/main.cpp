#include <iostream>
#include <string>
#define ll long long
ll a[26]={0};
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
        a[s[i]-'a']+=1;
    ll ans=0;
    for(int i=0;i<26;i++)
        ans+=(a[i]*(a[i]-1)/2);
    ans+=n;
    cout<<ans<<endl;
    return 0;
}
