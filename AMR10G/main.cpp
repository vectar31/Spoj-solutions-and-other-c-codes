#include <iostream>
#include <algorithm>
#define in long long int
using namespace std;

int main()
{
    in t,n,k,d,dd=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        in a[n];
        for(in i=0;i<n;i++)
            cin>>a[i];

        sort(a,a+n);
        d=a[n-1]-a[0];
        if(k==1)
            cout<<"0"<<endl;
        else
        {
            for(in i=n-1;i>=k-1;i--)
            {
                dd=a[i]-a[i-k+1];
                if(dd<d)
                    d=dd;
            }
            cout<<d<<endl;
        }

    }
    return 0;
}
