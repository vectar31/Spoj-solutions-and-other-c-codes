#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct suffix{
    string suff;
    int index;
};
bool cmp(suffix a,suffix b)
{
    return a.suff.compare(b.suff) < 0? 1 : 0;
}
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    suffix a[n+1];
    string temp="";
    for(int i=n-1;i>=0;i--)
    {
        temp=s[i]+temp;
        a[i].suff=temp;
        a[i].index=i;
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++)
        cout<<a[i].suff<<" "<<a[i].index<<endl;
    return 0;
}
