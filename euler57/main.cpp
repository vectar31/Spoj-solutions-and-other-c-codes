#include <bits/stdc++.h>
#define ll long long
#define N 10001
using namespace std;
int num[N]={0};
int den[N]={0};
int digits(int n)
{
    int res=0;
    while(n!=0)
    {
        res++;
        n/=10;
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    int c=0;
    num[0]=den[0]=0;
    num[1]=3;den[1]=2;
    for(int i=2;i<=n;i++)
    {
        num[i]=num[i-1]+2*den[i-1];
        den[i]=num[i]-den[i-1];
        cout<<num[i]<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        if(digits(num[i])>digits(den[i]))
            {cout<<i<<endl;c++;
            }
    }
    cout<<c<<endl;
    return 0;
}
