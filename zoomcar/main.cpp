#include <iostream>

using namespace std;

int main()
{
    int N,P;
    cin>>N>>P;
    double p= double(P/100.0);
    double q=1-p;
    double ans=0;
    for(int n=1;n<=2*N;n++)
    {
        if((N-2*n)%3==0)
            ans+=double(double(N*q)+double(2*n*(p-q)));
    }
    cout<<ans<<endl;
    return 0;
}
