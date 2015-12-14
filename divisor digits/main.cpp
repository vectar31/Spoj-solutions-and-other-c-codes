
#include <bits/stdc++.h>
using namespace std;
int sumof (string s)
{
    int res=0;
    for(int i=0;i<s.length();i++)
        res+=(s[i]-'0');
    return res;
}
bool div(string s)
{
    int c=0;
    int n = s.length();
    int a[]={1, 3, 2, 6, 4, 5};
    int sum=0;
    for(int i=n-1;i>=0;i--)
    {
        int d=s[i]-'0';
        sum+=(d*a[c%6]);
        c++;
    }
    //cout<<sum<<endl;
    return (sum%7==0);
}
int main()
{
    string s;
    while(cin>>s)
    {
        int nd[10];
        for(int i=0;i<10;i++)
            nd[i]=0;
        int ans=0;
        int sum=sumof(s);
        int n=s.length();
        for(int i=0;i<n;i++)
            nd[s[i]-'0']+=1;
        for(char i='1';i<='9';i++)
        {
            if(s.find(i)!=string::npos)
            {
                if(i=='1')
                    ans+=(nd[i-'0']);
                else if(i=='2' && (s[n-1]-'0')%2==0)
                    ans+=(nd[i-'0']);
                else if(i=='3' && sum%3==0)
                    ans+=(nd[i-'0']);
                else if(i=='4')
                {
                    if(n<2)
                    {
                        if(s[0]=='4'||s[0]=='8')
                            ans+=(nd[i-'0']);
                    }
                    else
                    {
                        int temp=((s[n-2]-'0')*10)+(s[n-1]-'0');
                        if(temp%4==0)
                            ans+=(nd[i-'0']);
                    }
                }
                else if(i=='5')
                {
                    if(s[n-1]=='0'||s[n-1]=='5')
                        ans+=(nd[i-'0']);
                }
                else if(i=='6')
                {
                    if(((s[n-1]-'0')%2==0)&&sum%3==0)
                        ans+=(nd[i-'0']);
                }
                else if(i=='7'&&div(s))
                    ans+=(nd[i-'0']);
                else if(i=='8')
                {
                    if(n==1)
                    {
                        if(s[0]=='8')
                            ans+=(nd[i-'0']);
                    }
                    else if(n==2)
                    {
                        int temp=((s[n-2]-'0')*10)+(s[n-1]-'0');
                        if(temp%8==0)
                            ans+=(nd[i-'0']);
                    }
                    else{int temp=((s[n-3]-'0')*100)+((s[n-2]-'0')*10)+(s[n-1]-'0');
                    if(temp%8==0)
                        ans+=(nd[i-'0']);}
                }
                else if(i=='9'&&sum%9==0)
                    ans+=(nd[i-'0']);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
