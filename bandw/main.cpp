#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s,t;
    while(1)
    {
        cin>>s>>t;
        if(s=="*") break;
        int ans=0;
        for(int i=0;i<s.length();)
        {
            if(s[i]!=t[i])
            {
                while(s[i]!=t[i]&&i<s.length())
                    i++;
                ans++;
            }
            i++;

        }
        cout<<ans<<endl;
    }
    return 0;
}
