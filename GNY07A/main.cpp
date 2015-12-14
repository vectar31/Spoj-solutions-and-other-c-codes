#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;string s;
        cin>>n>>s;
        if(n>s.length())
            cout<<i<<" "<<s<<endl;
        else{
        s=s.substr(0,n-1)+s.substr(n);
        cout<<i<<" "<<s<<endl;
        }

    }
    return 0;
}
