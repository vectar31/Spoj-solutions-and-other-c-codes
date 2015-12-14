#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n&1)
            cout<<n<<endl;
        else
        {
            string s="";
            //cout<<"papa"<<endl;
            ll p=1;
            ll ans=0;
            while(n!=0)
            {
                int a=n%2;
                n/=2;
                if(a)
                    s+="1";
                else
                    s+="0";
            }
            for(int i=s.length()-1;i>=0;i--)
            {
                if(s[i]-'0')
                    ans+=p;
                p*=2;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
