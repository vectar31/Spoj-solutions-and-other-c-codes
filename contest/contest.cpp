#include <bits/stdc++.h>
#define N 1000001
#define in(n) scanf("%d",&n)
#define in2(a,b) scanf("d",&a,&b)
#define in3(a,b,c) scanf("d%d",&a,&b,&c)
#define out(n) printf("%d\n",n)
#define out2(a,b) printf("%d %d\n",a,b)
#define inll(n) scanf("%lld",&n)
#define inll2(a,b) scanf("lld",&a,&b)
#define inll3(a,b,c) scanf("lld%lld",&a,&b,&c)
#define outll(n) printf("%lld\n",n)
#define outll2(a,b) printf("%lld %lld\n",a,b)

using namespace std;

int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='.')
                cout<<" ";
            else
            {
                if(n<=25)
                {
                    s[i]=(s[i]+n);
                    if(s[i]>'z')
                        s[i]-=26;
                    else if(s[i]>'Z' && s[i]-n < 'a')
                        s[i]-=26;
                }
                else
                {
                    s[i]=(s[i]+n);
                    if(s[i]>'z')
                        s[i]-=26;
                    else if(s[i]>'Z' && s[i]-n < 'a')
                        s[i]-=26;
                    if(s[i]<=90)
                        s[i]+=32;
                    else
                        s[i]-=32;
                }
                cout<<s[i];
            }
        }
        cout<<endl;
    }
    return 0;
}
