#include <bits/stdc++.h>

#define N 10000
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,w=0,o=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='W'||s[i]=='w')
                w++;
            if(s[i]=='o'||s[i]=='O')
                o++;
        }
        cout<<min(o,w/2)<<endl;
    }
    return 0;
}
