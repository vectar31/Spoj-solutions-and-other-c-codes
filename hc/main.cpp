#include <bits/stdc++.h>
#define N 100

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        while(n--)
        {
            string s;
            cin>>s;
            if(s=="lxh")c++;
        }
        if(c%2==0)
            cout<<"hhb"<<endl;
        else
            cout<<"lxh"<<endl;
    }
    return 0;
}
