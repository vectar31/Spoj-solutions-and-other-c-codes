#include <iostream>
#define ll long long
#define min(a,b) a<b?a:b
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,m;
        cin>>x>>m;
        int ans=0;
        ans+=(x);
        int w=ans;
        int temp=(w/m);
        int exw=(w%m);
        if(ans>0)
        {
            while(temp>0)
            {
                ans+=temp;
                exw+=temp;
                temp=exw/m;
                exw=exw%m;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
