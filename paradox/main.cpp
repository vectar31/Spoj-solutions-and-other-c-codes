#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin>>n,n!=0)
    {
        map <int , string> m1,m2;
        for(int i=0;i<n;i++)
        {
            string s;int k;
            cin>>k>>s;
            m1[i+1]=s;
            m2[k]=s;
        }
        map <int , string >::iterator it;
        bool f=1;
        for(int i=1;i<=n;i++)
        {
            if(m1[i]!=m2[i])
            {
                f=0;
                break;
            }

        }
        if(f)
            cout<<"NOT PARADOX"<<endl;
        else
            cout<<"PARADOX"<<endl;
    }
    return 0;
}
