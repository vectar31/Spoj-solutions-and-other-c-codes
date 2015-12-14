#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    while(s!="0")
    {
        int a[s.length()+10];
        for(int i=0;i<=s.length();i++)
            a[i]=0;
        a[0]=a[1]=1;
        for(int i=1;i<s.length();i++)
        {
            int t;
            t=(s[i-1]-'0')*10+(s[i]-'0');
			if(s[i]!='0' && s[i-1]!='0' && s[i+1]!='0' && t<=26)
				a[i+1]=a[i]+a[i-1];
			else
                a[i+1]=a[i];
        }
        cout<<a[s.length()]<<endl;
        cin>>s;
    }
    return 0;
}
