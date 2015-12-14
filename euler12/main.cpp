#include <bits/stdc++.h>
#define ll long long
#define N 749710
using namespace std;
int nd[N];
int countdiv(int n)
{
    int res=2;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            res++;
            if(i*i!=n)res++;
        }
    }
    return res;
}
int main()
{
    nd[0]=0;nd[1]=1;
    for(int i=2;i<N;i++)
        nd[i]=countdiv(i);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

    }
    return 0;
}
