#include <iostream>
#define in unsigned long long int
using namespace std;

int main()
{
    int a[][5]={{0,2,4,6,8},{1,3,5,7,9}};
    in m,n;
    cin>>m>>n;
    int m1;
    if(m<=2)
        cout<<a[m-1][n-1]<<endl;
    else
    {
        in ans;
        if(m%2==0)
        {
            m1=1;
            m-=2;
        }
        else
        {
            m1=0;
            m-=1;
        }
        ans=m*5;
        ans+=a[m1][n-1];
        cout<<ans<<endl;
    }
    return 0;
}
