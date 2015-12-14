#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int fa[26]={0};
int fb[26]={0};
void countc(string s , int a[])
{
    a[s[0]-97]=0;
    for(int i=0;i<s.length(); )
    {
        char c=s[i];
        int maxi=0;
        while(s[i]==c && i<s.length())
        {
            maxi+=1;
            i++;
        }
        if(maxi>a[c-97])
            a[c-97]=maxi;
    }
}
int main()
{
    int t;scanf("%d",&t);
    while(t--)
    {
        for(int i=0;i<26;i++)
            fa[i]=fb[i]=0;
        string a,b;cin>>a>>b;
        countc(a,fa);countc(b,fb);
        int ans=0;
        for(int i=0;i<26;i++)
            if(ans<(fa[i]+fb[i]))
                ans=fa[i]+fb[i];
        printf("%d\n",ans);
    }
    return 0;
}
