#include <iostream>
#include <vector>
#include <string>
using namespace std;
int check(int a)
{
    int c=0;
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {c++;break;}
    }
    return c;
}
int main()
{
    int a;
    cin>>a;
    vector<string> s;
    vector<int> n;
    for(int i=1;i<=a;i++)
    {
        string t;
        getline(cin,t);
        s.push_back(t);
    }
    for(unsigned int i=0;i<s.size();i++)
    {
        string t=s[i];int num=0;
        for(int j=0;j<t.size();j++)
        {
            if(t[i]>=48&&t[i]<=57)
                num=(num*10)+(t[i]-48);
            else
                n.push_back(num);
        }
    }
    for(unsigned int i=0;i<n.size();i+=2)
    {
        int p=n[i];int q=n[i+1];
        for(int j=p;j<=q;j++)
        {
            if(check(j)==0)
                cout<<j<<endl;
        }
    }
    return 0;
}

