#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        map <int,int> m;
        int n;
        scanf("%d", &n);
        for(int i=0;i<n;i++)
        {
            int a;
            scanf("%d", &a);
            if(m.find(a)!=m.end())
                m[a]++;
            else
            {
                m[a]=1;
            }
        }
        bool f=0;
        map <int , int >::iterator it;
        for( it= m.begin();it!=m.end();it++)
        {
            if(it->second >(n/2))
            {
                cout<<"YES "<<it->first<<endl;
                f=1;
                break;
            }
        }
        if(!f)
            cout<<"NO"<<endl;
    }
    return 0;
}
