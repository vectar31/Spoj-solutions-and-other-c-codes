#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string a="POSSIBLE",b="IMPOSSIBLE";

    while(n!=0)
    {
        bool f=1;
        int d[n];
        for(int i=0;i<n;i++)
            cin>>d[i];
        sort(d,d+n);
        for(int i=1;i<n;i++)
        {
            if(d[i]-d[i-1]>200)
            {
                //cout<<d[i]<<" "<<d[i-1]<<cout<<endl;
                f=0;
                break;
            }
        }
        if((1422-d[n-1])*2>200)
            f=0;
        if(f)
            cout<<a<<endl;
        else
            cout<<b<<endl;
        cin>>n;
    }
    return 0;
}
