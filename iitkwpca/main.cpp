#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<=t;i++)
    {
        map <string,int> m;
        int ans=0;
        string s;
        getline(cin,s);
        if(i!=0)
        {
            s+=" ";
            int n=s.length();
            string temp="";
            for(int i=0;i<n;i++)
            {
                if(s[i]!=' ')
                    temp+=s[i];
                else
                {
                    if(!(m.find(temp)!=m.end()))
                    {
                        m[temp]=1;
                        ans+=1;
                    }
                    while (s[i]==' '&&i<n)
                    i++;
                    i--;
                    temp="";

                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
