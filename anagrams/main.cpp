#include <iostream>
#include <string>
using namespace std;
void permut (string p, string s)
{
    int n=s.length();
    if(n==0)cout<<p<<endl;
    else
    {
        for(int i=0;i<n;i++)
            permut(p+s[i],s.substr(0,i)+s.substr(i+1));
    }
}
int main()
{
    string s;
    cin>>s;permut("",s);
    return 0;
}
