#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n=10000;
    bool p[n+1];
    for(int i=0;i<=n;i++)
        p[i]=1;
    p[0]=p[1]=0;
    for(int i=2;i<=int(sqrt(10001.0));i++)
    {
        if(p[i]==1)
        {
            for(int j=2;i*j<=n;j++)
                p[i*j]=0;
        }
    }
    int N;
    cin>>N;
    int di=0;
    string ans="";
    n=N;int i;
    for(i=2;i<=n;i++)
    {
        if(p[i]==1)
        {
            int nn=n;
            while(nn!=0)
            {
                di=di+(nn/i);
                nn/=i;
            }
            if(di>0){
            cout<<i<<"^"<<di;break;}
            di=0;
        }
    }
    di=0;
    for( i=i+1;i<=n;i++)//2^8 * 3^4 * 5^2 * 7^1
    {
        if(p[i]==1)
        {
            int nn=n;
            while(nn!=0)
            {
                di=di+(nn/i);
                nn/=i;
            }
            if(di>0)
            cout<<" * "<<i<<"^"<<di;
            di=0;
        }
    }
    return 0;
}
