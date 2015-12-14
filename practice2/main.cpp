#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#define in long long
#define loop for(in i=0;i<n;i++)
using namespace std;
/*in f[26]={0};
in g[26]={0};
void counting1(string a)
{
    for(in i=0;i<26;i++)
        f[i]=0;
    for(unsigned in i=0;i<a.length();i++)
    {
        char c=a[i];
        in index=c-'a';
        f[index]+=1;
    }
}
void counting2(string a)
{
    for(in i=0;i<26;i++)
        g[i]=0;
    for(unsigned in i=0;i<a.length();i++)
    {
        char c=a[i];
        in index=c-'a';
        g[index]+=1;
    }
}*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        bool flag=true;
        char c[11];
        cin>>c;
        for(int i=0;i<5;i++)
        {
            if(c[i]<'A'||c[i]>='a')
                flag=false;
        }
        for(int i=5;i<9;i++)
            if(c[i]>'9')
                flag=false;
        if(c[9]<'A')
            flag=false;
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
