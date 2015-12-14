#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    for(int i=0;i<n;i++)
    {
        string t=s[i];
        for(unsigned int k=0;k<t.length();k++)
        {
            for(unsigned int j=k+1;j<=t.length();j++)
            {
                string z=t.substr(k,j-k);
                cout<<z<<endl;
                z=string(z.rbegin(),z.rend());
                cout<<z<<endl;
                if(t.find(z)==-1)
                {
                    break;
                    c=1;
                }
            }
            if(c==1)
                break;
        }
        if(c==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
