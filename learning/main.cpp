#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 string pall(string s)
    {
        int l=s.length();
        if(l%2==0)
        {
            string t=s.substr(0,l/2);
            s=t+string(t.rbegin(),t.rend());
        }
        else
        {
            string t=s.substr(0,l/2);
            s=t+s[l/2]+string(t.rbegin(),t.rend());
        }
        return s;
    }
int main()
{
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    for(int i=0;i<n;i++)
    {
        string t=s[i];
        int l=t.length()-1;
        for(int i=l;i>=0;i--)
    {
        if(s[i]=='9')
        {
            s[i]='0';
        }
        else
        {
            char ch=s[i];
            ch=ch+1;
            s[i]=ch;
            break;
        }

    }
    cout<<pall(s[i]);
    }

    return 0;
}
