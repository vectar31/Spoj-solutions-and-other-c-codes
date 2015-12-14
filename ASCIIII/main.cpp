#include <iostream>

using namespace std;

int main()
{
    int a[27],b[27];int c[10];
    for(int i=0;i<27;i++)
    {a[i]=b[i]=0;}
    for(int i=0;i<10;i++)
        c[i]=0;
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {

        if(s[i]>='A'&&s[i]<='Z')
        {
            ++a[int (s[i]-64)];
        }
        if(s[i]>='a'&&s[i]<='z')
        {
            ++b[int(s[i]-96)];
        }
        if(s[i]>='0'&&s[i]<='9')
        {
            ++c[int(s[i]-48)];
        }
    }
    int p=0;
    for(int i=1;i<=26;i++)
    {
        if(a[i]>p)
            p=a[i];
    }
    for(int i=1;i<=26;i++)
    {
        if(b[i]>p)
            p=b[i];
    }
    for(int i=0;i<10;i++)
    {
        if(c[i]>p)
            p=c[i];
    }
    cout<<p;
    return 0;
}
