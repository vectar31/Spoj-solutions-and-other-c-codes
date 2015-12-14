#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<long> a;int c=0;
    while(c==0)
    {
        long b;
        cin>>b;
        if(b==0)
            break;
        a.push_back(b);
    }
    for(unsigned int i=0;i<a.size();i++)
    {
        long n=a[i];
        cout<<((n)*(n+1)*(2*n+1)/6)<<endl;
    }

    return 0;
}
