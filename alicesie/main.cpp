#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    while(t-->0)
    {
        cin>>n;
        cout<<((n%2==0)?n/2:(n/2+1))<<endl;
    }
    return 0;
}
