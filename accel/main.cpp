#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int a[26];
        for(int i=0;i<26;i++)
            a[i]=0;
        for(int i=0;i<n;i++)
            a[s[i]-'a']++;
        int ma=0,in=0;
        char c;int i;
        for(int j=0;j<26;j++){
        for(i=0;i<26;i++)
        {
            if(a[i]>ma)
            {
                ma=a[i];
                c=char(i+26);
                in =i;
            }
        }
        if(ma>0)
        {
            a[in]=0;
            cout<<c;
        }

        }
      cout<<endl;
    }
    return 0;
}
