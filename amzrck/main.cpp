#include <iostream>
using namespace std;
unsigned int ans[42];
int main()
{
    ans[0]=1;ans[1]=2;ans[2]=3;
    for(int i=3;i<42;i++)
        ans[i]=ans[i-1]+ans[i-2];
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        cout<<ans[n]<<endl;
    }
    return 0;
}
