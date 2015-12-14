#include <iostream>
#define in unsigned long long
using namespace std;
in a[61];
int main()
{
    a[0]=0;a[1]=1;
    for(int i=2;i<61;i++)
        a[i]=a[i-1]+a[i-2];
        //cout<<a[5]<<endl;
    int t;
    cin>>t;
    while(t--)

    {

        in n;
        cin>>n;
        for(int i=0; ;i++)
        {
            if(a[i]==n)
            {
                cout<<"IsFibo"<<endl;
                break;
            }
            if(n<a[i])
            {
                //cout<<a[i];
                cout<<"IsNotFibo"<<endl;
                break;
            }
        }
    }
    return 0;
}
