#include <bits/stdc++.h>
#define ll long long
#define N 30000001
using namespace std;
bool checktri(int a)
{
    int s=1+(8*a);
    int sq=sqrt(s);
    if(sq*sq==s && sq&1 )
        return true;
    return false;
}
bool checkpent(int a)
{
    int s=1+(24*a);
    int sq=sqrt(s);
    if(sq*sq==s)
        if((sq+1)%6==0)
            return true;
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    for(int i=n-1; ;i--)
    {
        if(checkpent(i)&&checktri(i))
        {
            cout<<i<<endl;
            break;
        }
    }}
    return 0;
}
