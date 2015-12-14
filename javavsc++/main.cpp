#include <iostream>
#include <string>
using namespace std;
string ctojava(string s)
{
    string t="Error!";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>=65&&s[i]<=90)
            return t;
        if(s[i]=='_')
        {
            //cout<<2343565<<endl;
            if(s[i+1]<'a'||s[i+1]>'z')
            {
                //cout<<i<<endl;
                return t;
            }
            s[i+1]-=32;
            s.erase(i,1);
        }
    }
    return s;
}

string javatoc(string s)
{
    string t="_";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]+=32;
            s.insert(i,t);
        }
    }
    return s;
}
int main()
{
    string s;
    while(cin>>s)
    {


    int a=s.find('_');
    if(a==0||(s[0]>=65&&s[0]<=90))
    {
        cout<<"Error!"<<endl;
    }
    else{
    if(a==string::npos)
    {
        cout<<javatoc(s)<<endl;
    }
    else
    {
        cout<<ctojava(s)<<endl;
    }
    }}
    return 0;
}
