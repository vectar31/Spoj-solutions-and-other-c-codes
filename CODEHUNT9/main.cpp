#include <bits/stdc++.h>
#define ll long long
using namespace std;
//ll ans[1001];
int main()
{
    int n;
    cin>>n;
    map <string,int> m;
    while(n--)
    {
        string a;
        cin>>a;
        if(m.find(a)!=m.end())
            m[a]++;
        else
            m[a]=1;
    }
    map<string,int>::iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}
