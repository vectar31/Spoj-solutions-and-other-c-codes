#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int l=0,e=0;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]=='0' && s[i-1]=='0')
            l+=1;
        if(s[i]=='0'&& s[i-1]=='1')
            e+=1;
        if(l==s.length() || l==e )
            cout<<"EQUAL"<<endl;
        else if(l>e)
            cout<<"SHOOT"<<endl;
        else
            cout<<"ROTATE"<<endl;
    }
    return 0;
}
