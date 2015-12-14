#include <bits/stdc++.h>
#define ll long long
using namespace std;
long long cc(int n)
{
    if(n==1)
        return 5;
    if(n==2)
        return 25;
    if(n==3)
        return 30;
    ll ans1=25;
    ll ans2=30;
    for(int i=3;i<=n;i++)
    {
        if(i%2==0)
        {
            ans1*=5;
            //temp=ans1/5;
        }
        else
            ans2+=ans1;
    }
    if(n%2==0)
        return ans1;
    else
        return ans2;
}
int main()
{
    while(1){
    int n;
    cin>>n;
    cout<<cc(n)<<endl;}
}
