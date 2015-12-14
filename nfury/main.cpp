#include <cmath>
#include <iostream>
#define N 1001
using namespace std;
int ans[N]={0};
int main()
{
    ans[0]=0;
    for(int i=1;i*i<N;i++)
        ans[i*i]=1;
    int temp=1;
    for(int i=2;i<N;i++)
    {
        int s=sqrt(i);
        if(i!=s*s)
        {
            int maxi=10000;
            for(int j=1;j<=i/2;j++)
            {
                if(ans[j]+ans[i-j]<maxi)
                    maxi=ans[j]+ans[i-j];
            }
            ans[i]=maxi;
        }
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<ans[n]<<endl;
    }
    return 0;
}
