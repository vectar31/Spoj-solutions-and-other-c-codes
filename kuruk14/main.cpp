#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            a[i]=-1;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(a[x]==-1)
                a[x]=x;
            else if(a[n-x-1]==-1)
                a[n-x-1]=x;
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==-1)
                c=2;
        }
        if(c==2)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
