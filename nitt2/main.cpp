#include <iostream>
#include <string>
using namespace std;
int a[]={1,3,2,6,4,5};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.length();
        long long d=0,sum=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            sum+=(s[i]-'0');
            d+=((s[i]-'0')*a[(n-i-1)%6]);
        }
        int e=(s[n-1]-'0')+(10*(s[n-2]-'0'));
        //cout<<d<<" "<<sum<<" "<<e<<endl;
        if(sum%9==0&&e%4==0&&d%7==0)
            cout<<"Yes ";
        else
            cout<<"No ";
        if(e%25==0&&sum%3==0&&d%7==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
