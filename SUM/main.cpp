#include <iostream>
using namespace std;
int main()
{
    int n,t,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        if(t>0)
            sum=sum+t;
    }
    cout<<sum<<endl;
    return 0;
}
