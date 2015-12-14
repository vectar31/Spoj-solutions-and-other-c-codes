#include <iostream>
#include <iomanip>
#define N 1000001
using namespace std;
double ans[N];
int main()
{
    ans[0]=0;ans[1]=1;
    for(int i=2;i<N;i++)
        ans[i]=ans[i-1]+(1.0/i);
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
