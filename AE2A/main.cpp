#include <bits/stdc++.h>

#define M 600
#define N 2000

using namespace std;
double ans[M][N];
void solve()
{
    for(int i=0;i<M;i++)
        for(int j=0;j<N;j++)
            ans[i][j]=0;
    for(int i=1;i<=6;i++)
        ans[1][i]=1/6.0;
    for(int i=2;i<M;i++)
        for(int j=1;j<N;j++)
            for(int k=1;k<=6&&j-k>=0;k++)
                ans[i][j]+=ans[i-1][j-k]/6.0;
}
int main()
{
    solve();
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(n<550&&k<1900) // Because for the rest of the cases , probability percentage will be less than 1%
            cout<<(int)(ans[n][k]*100)<<endl;
        else
            cout<<0<<endl;

    }
    return 0;
}
