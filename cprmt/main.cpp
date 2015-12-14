#include <iostream>
#include <string>
using namespace std;
int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
int main()
{
    string s1,s2;
    while(cin>>s1)
    {
        cin>>s2;
        //cout<<s1<<endl;cout<<s2<<endl;
        int a1[26],a2[26],ans[26];
        for(int i=0;i<26;i++)
            a1[i]=a2[i]=ans[i]=0;
        for(int i=0;i<s1.length();i++)
            a1[s1[i]-'a']+=1;
        for(int i=0;i<s2.length();i++)
            a2[s2[i]-'a']+=1;
        for(int i=0;i<26;i++)
            if(a1[i]>0&&a2[i]>0)
                ans[i]=min(a1[i],a2[i]);
        for(int i=0;i<26;i++)
        {
            while(ans[i]>0)
            {
                cout<<char(i+97);
                ans[i]-=1;
            }
        }
        cout<<endl;

    }
    return 0;
}
