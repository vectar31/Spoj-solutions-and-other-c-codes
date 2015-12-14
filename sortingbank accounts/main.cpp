#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s[n+1];
        for(int i=0;i<=n;i++)
            getline(cin,s[i]);
        sort(s+1,s+n+1);
        int c=1;
        for(int i=1;i<=n;i++)
        {
            if(s[i]==s[i+1])
                c+=1;
            else
            {
                cout<<s[i]<<" "<<c<<endl;
                c=1;
            }
        }
        cout<<endl;
    }
    return 0;
}
