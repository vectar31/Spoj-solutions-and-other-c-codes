#include <iostream>
#define N 1000001
using namespace std;
int cubefree[N];
int number[N];
int main()
{
    for(int i=0;i<N;i++)
        cubefree[i]=1;
    cubefree[0]=0;
    for(int i=2;i*i*i<N;i++)
        {
            int k=i*i*i;
            for(int j=1;j*k<N;j++)
                cubefree[j*k]=0;
        }
    int c=1;
    for(int i=1;i<N;i++)
        {if(cubefree[i])
            number[i]=c++;
        else
            number[i]=0;
        }
        int t;
        cin>>t;
        for(int i=1;i<=t;i++)
        {
            int n;
            cin>>n;
            if(number[n]!=0)
                cout<<"Case "<<i<<": "<<number[n]<<endl;
            else
                cout<<"Case "<<i<<": Not Cube Free"<<endl;
        }
    return 0;
}
