#include <iostream>
#include <string>
#include <sstream>
using namespace std;
string breaking(string s)
{
    int n=s.length();string t;
    if(n&1)
    {
        t=s.substr(0,n/2);
        return s.substr(0,n/2+1)+string(t.rbegin(),t.rend());
    }
    else
    {
        t=s.substr(0,n/2);
        return s.substr(0,n/2)+string(t.rbegin(),t.rend());
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,p="";
        cin>>s;


        int n=s.length();
        if(n==1)
        {
            if(s=="9")
                cout<<"11"<<endl;
            else
                cout<<char(s[0]+1)<<endl;
        }
        else
        {
            string t=breaking(s);
            if(t>s)
                p=t;
            else if(t<s)
            {

            }
            else
            {

            }
            cout<<p<<endl;
        }
    }

    return 0;
}
