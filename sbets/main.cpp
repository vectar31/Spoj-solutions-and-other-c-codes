#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        map <string , int> m;
        map <string , int>::iterator it;
        string t1,t2;
        int g1,g2;
        for(int i=0;i<16;i++)
        {
            cin>>t1>>t2>>g1>>g2;
            if(g1>g2)
            {
                if(m.find(t1)!=m.end())
                    m[t1]++;
                else
                    m[t1]=1;
            }
            else
            {
                if(m.find(t2)!=m.end())
                    m[t2]++;
                else
                    m[t2]=1;
            }
        }
        int maxim=0;
        string s;
        for(it=m.begin();it!=m.end();it++)
        {
            if(it->second>maxim)
            {
                maxim=it->second;
                s=it->first;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
