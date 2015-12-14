#include <iostream>
#define in long long int
using namespace std;
in N=1000000007;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int f=1;
        int n;cin>>n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
            b[i]=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>=n)
                f=0;
            else
                b[a[i]]+=1;
        }
        /*for(int i=0;i<n;i++)
            cout<<b[i]<<" ";*/
            in ans=1;
            if(f){
            in s=0;
        for(int i=0;i<n;i++)
        {
            if(b[i]>0||s>0)
                {
                    ans=((ans%N)*((b[i]+s)%N))%N;
                    s+=(b[i]-1);
                }
                else
                {
                    ans=0;
                    break;
                }
        }
            }
            else
                ans=0;
            cout<<ans<<endl;
    }
    return 0;
}
