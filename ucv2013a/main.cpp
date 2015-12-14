#include <iostream>
using namespace std;
int main()
{
    long long int N,L,m=1000000007;
    cin>>N>>L;
    while(N!=0&&L!=0)
    {
        long long int a=1,b=0;
        for (int i=1;i<L+1;i++)
        {
            a=(N*a)%m;
            b=(b+a)%m;
        }
        cout<<b<<endl;
        cin>>N>>L;
    }
    return 0;
}
