#include <iostream>
#include <string>
using namespace std;
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int i;
int cal(string s)
{
        if(i>=s.length())
            return 0;
        if (s[i++]=='l')
             return 1;
        else
            return max(cal(s),cal(s))+1;
}
int main()
{
        int t;
        cin>>t;
        while (t--)
        {
                i=0;
                string s;
                cin>>s;
                int ans=cal(s)-1;
                cout<<ans<<endl;
        }
        return 0;
}
