#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
string convert(string s)
{
    string t="";
    for(int i=0;i<s.length();i+=2)
    {
        t=t+string(s[i],s[i+1]-'0');
    }
    return t;
}
void add(string a,string b)
{

}
int main()
{
    string s;
    cin>>s;
    cout<<convert(s)<<endl;
    return 0;
}
