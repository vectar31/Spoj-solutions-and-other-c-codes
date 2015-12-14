#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
// try to do it using trie
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string a[n+1];
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            a[i]=s;
        }
        sort(a,a+n);
        bool f=1;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[j].length()<=a[i].length())
                    break;
                if(a[j].substr(0,a[i].length())==a[i])
                {
                    //cout<<a[i]<<" "<<a[j]<<endl;
                    f=0;
                    break;
                }
            }
            if(!f)
                break;
        }
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
