#include <iostream>
#define in unsigned long long int
using namespace std;

int main()
{
    int n,d;
    cin>>n>>d;
    while(!(n==0&&d==0))
    {
        in ans=1;
        for(int i=1;i<=d;i++)
        ans*=n;
        cout<<ans<<endl;
        cin>>n>>d;
    }
    return 0;
}
