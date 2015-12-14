#include <bits/stdc++.h>
#define N 5000001
#define ll long long
using namespace std;
ll a[N]={0};
ll ans[N]={0};
int cal(int num)
{
    ll n=num;
    int res=0;
    while(n!=1)
    {
        /*if(a[n]!=0&&n<N)
        {
            return a[n]+res;
        }*/
        if(n&1)
            n=3*n+1;
        else
            n/=2;
        res++;
    }
    return res+1;
}
int main()
{
    a[0]=0;a[1]=1;
    for(int i=2;i<N/10;i++)
        a[i]=cal(i);
    //cout<<" "<<a[18]<<" "<<a[19]<<endl;
    ll ansmax=0,ansi=0;
    for(int i=0;i<N;i++)
    {
        if(a[i]>=ansmax)
            {ansmax=a[i];ansi=i;}
        ans[i]=ansi;
    }
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        printf("%I64d\n",ans[n]);
    }
    return 0;
}
