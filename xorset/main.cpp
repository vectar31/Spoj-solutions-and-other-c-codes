#include <iostream>
#include <cstdio>
#include <map>
#define ll long long
using namespace std;
ll a[100000];
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf("%lld", &a[i]);
    int ans=0;
    map <ll,int> m;
    for(int i=0;i<n;i++)
    {
        ans=a[i];
        if(m.find(ans)!=m.end())
                m[ans]++;
            else
                m[ans]=1;
        for(int j=i+1;j<n;j++)
        {
            ans^=a[j];
            if(m.find(ans)!=m.end())
                m[ans]++;
            else
                m[ans]=1;
        }
    }
    map <ll,int>::iterator it;
    int maxans1=0,maxans2=0;
    for(it=m.begin();it!=m.end();it++)
    {
        if(it->second>maxans1)
        {
            maxans1=it->second;
            maxans2=it->first;
        }

    }
    cout<<maxans2<<" "<<maxans1<<endl;
    return 0;
}
