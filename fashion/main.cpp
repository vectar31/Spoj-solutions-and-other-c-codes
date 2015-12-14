#include <iostream>
#include <algorithm>
#define loop for(int i=0;i<n;i++)
using namespace std;

int main()
{
    int t,n;
    int b[1001];
        int g[1001];
    cin>>t;
    while(t--)
    {
        int s=0;
        cin>>n;
        loop
        cin>>b[i];
        loop
        cin>>g[i];
        sort(b,b+n);
        sort(g,g+n);
        loop
            s=s+(b[i]*g[i]);
        cout<<s<<endl;
    }
    return 0;
}
