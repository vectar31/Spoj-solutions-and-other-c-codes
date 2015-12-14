#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        double a,b,c;
        cin>>a>>b>>c;
        long long ans1 = a*b*c-1;
        int ans2=0;
        while(a>1)
        {
            a/=2;
            ans2++;
        }
        while(b>1)
        {
            b/=2;
            ans2++;
        }
        while(c>1)
        {
            c/=2;
            ans2++;
        }
         cout<<"Case #"<<i<<": "<<ans1<<" "<<ans2<<endl;
    }
    return 0;
}
