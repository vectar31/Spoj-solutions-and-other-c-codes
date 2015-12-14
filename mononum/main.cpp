#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>
#define N 1000001
using namespace std;
double ans[N];
double a[N];
int main()
{
    for(int i=8;i<N;i++)
    {
        a[i-8]=1.0;

        for(int j=0;j<8;++j)
        {
            a[i-8]/=(i-j);
            a[i-8]*=(j+1);
        }
    }

    for(int i=0;i<N;i++)
    {
        ans[i]=(i+9.0)/9.0;
        ans[i]-=a[i];
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<fixed<<setprecision(6)<<ans[n]<<endl;
    }
    return 0;
}
