#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n==0||n==1)
        cout<<0<<endl;
        else if(n==2)
            cout<<1<<endl;

        else
        {
            ll tempn=3;
            ll i=1;
            while(1)
            {
                if(n>=tempn&&n<=tempn+i)
                    {
                        cout<<i+1<<endl;
                        break;
                    }
                else
                {
                    tempn+=(i+1);
                    i++;
                }

            }
        }
    }
    return 0;
}
