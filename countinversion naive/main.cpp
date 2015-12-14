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
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+i;j<n;j++)
        {
            if(a[i]>a[j])
            {
                c++;
                //cout<<a[i]<<" "<<a[j]<<endl;
            }
        }
    }
    cout<<c<<endl;}
    return 0;
}
