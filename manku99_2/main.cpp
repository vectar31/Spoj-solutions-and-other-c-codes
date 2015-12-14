#include <iostream>
#include <string>
#define in long long
using namespace std;
string s="manku";
string ans(in n)
{
    if(n==-1)
        return "";
        return (ans(n/5-1)+s[n%5]);
}
int main()
{
    int t;in n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<ans(n-1)<<endl;
    }
}
