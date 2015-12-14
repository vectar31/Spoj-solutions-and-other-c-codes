#include <iostream>
#include <algorithm>
#define in long long int
using namespace std;

int main()
{
    int t,n,fr,sc;
    int st[10001];
    cin>>t;
    sc=t;
    while(t--)
    {
        in sum=0;
        cin>>n>>fr;
        for(int i=0;i<fr;i++)
            cin>>st[i];
        sort(st,st+fr);
        int i=fr-1;
        while(sum<n&&i>=0)
        {
            sum+=st[i];
            i-=1;
        }
        cout<<"Scenario #"<<sc-t<<":"<<endl;
        if(i<0)
            cout<<"impossible"<<endl;
        else
            cout<<fr-i-1<<endl;
        cout<<endl;


    }
    return 0;
}
