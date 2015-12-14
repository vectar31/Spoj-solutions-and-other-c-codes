#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        string a,b;
        cin>>a>>b;
        int al=a.length();
        int bl=b.length();
        ll an=0,bn=0,temp=1;
        for(int i=al-1;i>=0;i--)
        {
            if(a[i]=='1')
                an+=(temp);
            temp*=2;
        }
        temp=1;
        for(int i=bl-1;i>=0;i--)
        {
            if(b[i]=='1')
                bn+=(temp);
            temp*=2;
        }
        //cout<<an<<" "<<bn<<endl;
        if(bn==0)
            cout<<"Case "<<j<<": NO"<<endl;
        else if(an%bn==0)
            cout<<"Case "<<j<<": YES"<<endl;
        else
            cout<<"Case "<<j<<": NO"<<endl;
    }
    return 0;
}
