#include <iostream>

using namespace std;
void check(string s,string p)
{
    int ls=s.length();
    int lp=p.length();
    if(ls<lp)
    {
        cout<<"Match cannot be found"<<endl;
        return;
    }
    for(int i=0;i<=ls-lp;i++)
    {
        string t=s.substr(i,lp);
        if(t==p)
            cout<<"Match found at: "<<i<<endl;
    }
    cout<<"String was checked"<<endl;
}
int main()
{
    string s,p;
    cout<<"Enter the string you want to search the pattern in"<<endl;
    cin>>s;
    cout<<"Enter the pattern to be found:"<<endl;
    cin>>p;
    check(s,p);
    return 0;
}
