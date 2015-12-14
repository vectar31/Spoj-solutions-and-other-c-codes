#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        int n,r;
        cin>>n>>r;
        int a[r],b[r];
        for(int i=0;i<r;i++)
            cin>>a[i]>>b[i];
        map <int,int> m;
        for(int i=0;i<r;i++)
        {
            m[a[i]]=b[i];
        }
        bool f=1;
        for(int i=0;i<r;i++)
        {
            if(m.find(b[i])!=m.end())
            {
                f=0;
                break;
            }
        }
        cout<<"Scenario #"<<j<<": ";
        if(f)
            cout<<"spying"<<endl;
        else
            cout<<"spied"<<endl;
    }
    return 0;
}
