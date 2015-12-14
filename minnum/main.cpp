#include <vector>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin>>s;
    while(s!="-1")
    {
        ll sum=0;
        for(int i=s.length()-1;i>=0;i--)
            sum=sum*10+(s[i]-'0');
        if(a==0)
            b=0;
        else if(sum%9==0)
            b=a/9;
        else
            b=(a/9)+1;
        cout<<b<<endl;
        cin>>s;
    }
}
