#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(n--)
    {
        string s1,s2;
        getline(cin,s1);
        getline(cin,s2);
        string s="";
        int a1[26],a2[26];
        for(int i=0;i<26;i++)
            a1[i]=a2[i]=26;
        for(int i=0;i<s1.length();i++)
            if(s1[i]>='A'&&s1[i]<='Z')
                a1[s1[i]+32]+=1;
        for(int i=0;i<s2.length();i++)
            if(s2[i]>='A'&&s2[i]<='Z')
                a2[s2[i]+32 -'a']+=1;
        for(int i=0;i<s1.length();i++)
            if(s1[i]>='a'&&s1[i]<='z')
                a1[s1[i]-'a']+=1;
        for(int i=0;i<s2.length();i++)
            if(s2[i]>='a'&&s2[i]<='z')
                a2[s2[i]-'a']+=1;
        for(int i=0;i<26;i++)
        {
            while(a1[i]!=a2[i])
            {
                while(a1[i]!=)
            }
        }
    }

    return 0;
}
