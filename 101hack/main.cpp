#include <bits/stdc++.h>

using namespace std;
int a[26]={0};
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    for(int i=0;i<n;i++)
        a[s[i]-'a']+=1;
    int c=0;
    for(int i=0;i<25;i++)
        if(s[i]!=s[i+1] && s[i]!=0&&s[i+1]!=0)
            c++;
    if(c==0)
        cout<<"YES"<<endl;
    else if(c==1)
    {

    }
    else
        cout<<"NO"<<endl;
    return 0;
}
