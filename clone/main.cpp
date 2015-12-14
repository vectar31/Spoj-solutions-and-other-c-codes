#include <string>
#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n,l;
    cin>>n>>l;
    while(n!=0){
    string s[n];
    map <string,int> m ;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        if(m.find(s[i])!=m.end())
            m[s[i]]++;
        else
            m[s[i]]=1;
    }
    int a[n+1];
    for(int i=0;i<=n;i++)
        a[i]=0;
    map <string,int>::iterator it;
        for(it=m.begin();it!=m.end();it++)
        {
        a[it->second]+=1;
        }
        for(int i=1;i<=n;i++)
            cout<<a[i]<<endl;



        cin>>n>>l;
    }

    return 0;
}
