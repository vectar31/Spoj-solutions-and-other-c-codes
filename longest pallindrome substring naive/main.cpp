#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int ans=0;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        string temp="";
        for(int j=i;j<n;j++)
            {
                temp+=s[j];
                if(temp==string(temp.rbegin(),temp.rend()))
                    ans++;
                //cout<<temp<<endl;

            }
    }
    cout<<ans<<endl;
    return 0;
}
