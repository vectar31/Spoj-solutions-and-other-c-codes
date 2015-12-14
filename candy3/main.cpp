#include <iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;cout<<endl;
    for(int i=0;i<t;i++)
    {
        long long int n,sum=0;
        cin>>n;
        long long int a[n];
        for(int j=0;j<n;j++)
            cin>>a[j];
        cout<<endl;
        for(int j=0;j<n;j++)
            sum=sum+a[j];
        if(sum%n==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
