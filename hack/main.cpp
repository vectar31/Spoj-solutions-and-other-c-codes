#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>
#include <iomanip>
#include <queue>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        bool f=1;
        string s;
        cin>>s;
        int sum=0;
        int a[26];
        for(int i=0;i<26;i++)
            a[i]=0;
        int n=s.length();
        for(int i=0;i<n;i++)
            a[s[i]-'a']+=1;
        for(int i=0;i<26;i++)
            sum+=a[i];
        for(int i=0;i<26;i++)
        {
            if(a[i]!=0)
            {
                if(a[i]>sum-a[i]+1)
                {
                    f=0;
                    break;
                }
            }
        }
        bool check=1;
        if(f)
        {
            while(check)
            {
                check=0;
                for(int i=0;i<26;i++)
                {
                    if(a[i]!=0)
                    {
                        check=1;
                        cout<<char(i+97);
                        a[i]--;
                    }
                }
            }
            cout<<endl;
        }
        else
            cout<<-1<<endl;

    }
    return 0;
}
