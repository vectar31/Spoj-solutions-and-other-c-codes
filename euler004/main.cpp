#include <bits/stdc++.h>

using namespace std;
int ans[1240];
bool checkpal(int n)
{
    int temp=n;
    int rev=0;
    while(temp!=0)
    {
        rev=rev*10+(temp%10);
        temp/=10;
    }
    return (rev==n);
}
int main()
{
    //cout<<checkpal(121)<<endl;
    int a=100,b=999,c=0;
    for(int i=a;i<=b;i++)
    {
        for(int j=i+1;j<=b;j++)
        {
            if(checkpal(i*j))
                ans[c++]=i*j;
        }
    }
    sort(ans,ans+c);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i;
        for(i=0;i<c;i++)
            if(ans[i]>=n)
                break;
        cout<<ans[i-1]<<endl;
    }
    return 0;
}
