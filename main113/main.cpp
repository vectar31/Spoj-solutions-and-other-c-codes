#include <iostream>
#define in unsigned long long int
using namespace std;
int main()
{
    in ans[31];ans[0]=0;ans[1]=3;ans[2]=9;
    for(int i=3;i<31;i++)
        ans[i]=2*ans[i-1]+ans[i-2];
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        cout<<ans[n]<<endl;
    }
}
