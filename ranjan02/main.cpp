#include <iostream>
#define in unsigned long long int
using namespace std;
int main()
{
    in th[36];
    th[0]=0;th[1]=2;
    for(int i=2;i<=35;i++)
        th[i]=3*th[i-1]+2;
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<th[n]<<endl;
    }
    return 0;
}
