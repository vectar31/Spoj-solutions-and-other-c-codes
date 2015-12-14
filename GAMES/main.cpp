#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int gcd(int a,int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int convert(string s)
{
    int n=s.length();int num=0;
    for(int i=0;i<n;i++)
    {
        char ch=s[i];
        num=num*10+(ch-48);
    }
    return num;
}
int main()
{
    int t,num;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        if(s.find('.')==string::npos)
            cout<<"1"<<endl;
        else
        {
            string t=s.substr(s.find('.')+1);
            num=convert(t);double l=t.length();

            double den=pow(10.0,l);
            int g=gcd(den,num);
            cout<<(den/g)<<endl;
        }
    }
    return 0;
}
