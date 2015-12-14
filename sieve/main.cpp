#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n=99998953;
    bool p[n+1];
    for(int i=0;i<=n;i++)
        p[i]=1;
    p[0]=p[1]=0;
    for(int i=2;i<=int(sqrt(99998953.0));i++)
    {
        if(p[i]==1)
        {
            for(int j=2;i*j<=n;j++)
                p[i*j]=0;
        }
    }
    int c=1;
    for(int i=2;i<=n;i++)
    {
        if(p[i]==1)
        {
            if(c%100==1)
                cout<<i<<endl;
            c++;
        }
    }
    return 0;
}
