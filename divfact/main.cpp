#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n=50000;
    bool p[50001];
    for(int i=0;i<=n;i++)
        p[i]=1;
    p[0]=p[1]=0;
    for(int i=2;i<=int(sqrt(50000.0));i++)
    {
        if(p[i]==1)
        {
            for(int j=2;i*j<=n;j++)
                p[i*j]=0;
        }
    }
    int t;
    cin>>t;
    long long m=1000000007;
    while(t--)
    {
        int n;
        cin>>n;int di=0;long long pro=1;
        for(int i=2;i<=n;i++)
        {
            if(p[i]==1)
            {
                int nn=n;
                while(nn!=0)
                {
                    di=di+(nn/i);
                    nn/=i;
                }
                pro=(pro%m*(di+1)%m)%m;
                di=0;
            }
        }
        cout<<pro<<endl;

    }
    return 0;
}
