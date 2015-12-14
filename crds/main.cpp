#include <iostream>
#define in long long
using namespace std;

int main()
{
    int t;in n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        in ans=(n*(n+1)+n*(n-1)/2)%1000007;
        cout<<ans<<endl;
    }
    return 0;
}
