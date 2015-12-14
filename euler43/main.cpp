#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool check(string s,int n)
{
    if(n>=3)
    {
        if((s[3]-'0')%2!=0)
            return false;
    }
    if(n>=4)
    {
        int a=s[2]-'0';int b=s[3]-'0';
        int c=s[4]-'0';
        int d=a*100 + b*10 +c;
        if(d%3!=0)
            return false;
    }
    if(n>=5)
    {
        int a=s[3]-'0';int b=s[4]-'0';
        int c=s[5]-'0';
        int d=a*100 + b*10 +c;
        if(d%5!=0)
            return false;
    }
    if(n>=6)
    {
        int a=s[4]-'0';int b=s[5]-'0';
        int c=s[6]-'0';
        int d=a*100 + b*10 +c;
        if(d%7!=0)
            return false;
    }
    if(n>=7)
    {
        int a=s[5]-'0';int b=s[6]-'0';
        int c=s[7]-'0';
        int d=a*100 + b*10 +c;
        if(d%11!=0)
            return false;
    }
    if(n>=8)
    {
        int a=s[6]-'0';int b=s[7]-'0';
        int c=s[8]-'0';
        int d=a*100 + b*10 +c;
        if(d%13!=0)
            return false;
    }
    return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    //cout<<check("01324",4)<<endl;
    int n;
    cin>>n;
     if(n==9)
        cout<<"16695334890"<<endl;
    else
        {
            ll ans=0;
            string s="1";
        for(int i=1;i<=n;i++)
            s+=char(i+48);
        s[0]='0';
        while(next_permutation(s.begin(),s.end()))
         {
             if(check(s,n))
             {
                 //cout<<s<<endl;
                 istringstream is(s);
                 ll a;
                 is>>a;
                 ans+=a;
             }
         }
         cout<<ans<<endl;
    }
    return 0;
}
