#include <iostream>
#include <string>
#include <map>
using namespace std;
long long ncr(int n, int k)
{
    if(k>n)
        return 0;
    if(k>n-k)
        k=n-k;
    long long res=1;
    for(int i=0;i<k;i++)
    {
        res*=(n-i);
        res/=(i+1);
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
            map <string,int> freq;

            int n,Q;
    cin>>n>>Q;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        for(int l=1;l<=n-i;l++)
            {
                string temp=s.substr(i,l);
                if(!(freq.find(temp)!=freq.end()))
                    freq[temp]=1;
                else
                    freq[temp]+=1;
            }
    }
        for(int i=0;i<Q;i++)
        {
            int q;
            cin>>q;
            long long ans=0;
            map <string , int >::iterator  it;
            for (it=freq.begin(); it!=freq.end(); ++it)
            {
                if(it->second>=q)
                    ans+=(ncr(it->second,q));
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
