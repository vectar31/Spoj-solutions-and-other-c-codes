#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    while(s.length()!=1)
    {
        int f=s.rfind(" ");int n=0;
        string t,z=s.substr(0,f);
        string p=s.substr(f+1,s.length()-f-1);
        for(int i=0;i<p.length();i++)
        {
            int k=p[i]-'0';
            n=n*10+k;
        }
        cout<<n<<endl;
        for(int i=0;i<n;i++)
            t=t+z;
        cout<<t<<endl;
        for(int i=0;i<z.length()-1;i++)
        {
            t=t.substr(1,t.length()-1)+t[0];
            cout<<t<<endl;
        }
        getline(cin,s);

    }
    return 0;
}
