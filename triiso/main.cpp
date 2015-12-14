#include <iostream>
#include <cmath>
using namespace std;
double pi =4 * atan(1.0);
bool a[1000001]={0};
int main()
{
    //for(int i=0;i<1000001;i++)
      //  a[i]=0;
    for(int i=1;i<=1000;i++)
        for(int j=i+1;j<=1000;j++)
            for(int p=1;p*(i*i+j*j)<1000001;p++)
                a[p*(i*i+j*j)]=1;
    int t;cin>>t;
    while(t--)
    {
        int S;
        cin>>S;
        if(a[S])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
