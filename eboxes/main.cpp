#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int N,T,K,F;
        cin>>N>>K>>T>>F;
        int z=(F-N)/(K-1)+F;
        cout<<z<<endl;
    }
    return 0;
}
