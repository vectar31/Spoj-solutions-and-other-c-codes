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
        long long ans=0;
        for(int i=1;i*i<=n;i+=1)
        {
            if(n%i==0){
            if(i%2!=0)
                ans+=1;
            else
            {
                if((n/i)%2==0)
                    {
                        if(i==n/i)
                        ans++;
                    }
                else
                    ans++;
            }}
        }
        cout<<ans<<endl;
    }
    return 0;
}
