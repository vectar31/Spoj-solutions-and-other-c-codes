#include <iostream>
#include <cmath>
#include <algorithm>
#include <ctime>
#define N 1000000007
using namespace std;

int main()
{
    int k , l , m;
    cin>>k>>l>>m;
    if(k>l) swap(k,l);
    //cout<<k<<l<<endl;
    int b[m];
    bool a[1000001];
    for(int i=0;i<m;i++)
        cin>>b[i];
    a[0]=0;a[1]=1;
    for(int n=2;n<=1000000;n++)
    {
        if((n-l)>=0)
        {
            if(a[n-l]==0||a[n-k]==0||a[n-1]==0)
                a[n]=1;
            else
                a[n]=0;
        }
        else if(n-k>=0)
        {
            if(a[n-k]==0||a[n-1]==0)
                a[n]=1;
            else
                a[n]=0;
        }
        else
        {
            if(a[n-1]==0)
                a[n]=1;
            else
                a[n]=0;
        }
    }
    /*for(int i=0;i<=11;i++)
        cout<<a[i]<<endl;*/
    for(int i=0;i<m;i++)
    {
        if(a[b[i]]==0)
            cout<<"B";
        else
            cout<<"A";
    }

    return 0;
}
