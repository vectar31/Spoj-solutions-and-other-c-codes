#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int one=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a==1)
                one+=1;
        }
        int ans=0;
        if(one%2==0)
        {
            ans=n-one;
        }
        else
        {
            ans+=one;
        }
        cout<<ans<<endl;
    }
    return 0;
}
