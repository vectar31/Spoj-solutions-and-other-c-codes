#include <bits/stdc++.h>

using namespace std;

/* this is a beautiful elegant and simple question a tough easy question */
int main()
{
    //while(1){
    int n;
    cin>>n;
    string s,ans="";
    cin>>s;
    for(int i=0;i<2*n;i+=2)
    {
        if((s[i]=='A'&&s[i+1]=='B') || (s[i]=='B'&&s[i+1]=='A'))
        {
            ans+='C';
            ans+='D';
        }
        else if((s[i]=='A'&&s[i+1]=='C')||(s[i]=='C'&&s[i+1]=='A'))
        {
            ans+='B';
            ans+='D';
        }
        else if((s[i]=='A'&&s[i+1]=='D')||(s[i]=='D'&&s[i+1]=='A'))
        {
            ans+='B';
            ans+='C';
        }
        else if((s[i]=='B'&&s[i+1]=='C')||(s[i]=='C'&&s[i+1]=='B'))
        {
            ans+='A';
            ans+='D';
        }
        else if((s[i]=='B'&&s[i+1]=='D')||(s[i]=='D'&&s[i+1]=='B'))
        {
            ans+='A';
            ans+='C';
        }
        else if((s[i]=='C'&&s[i+1]=='D')||(s[i]=='D'&&s[i+1]=='C'))
        {
            ans+='B';
            ans+='A';
        }
        if(i>1)
        {
            if(ans[i]==ans[i-1])
                swap(ans[i],ans[i+1]);
        }
    }
    cout<<ans<<endl;
    //}
    return 0;
}
