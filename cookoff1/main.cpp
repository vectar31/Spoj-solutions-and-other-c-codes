#include <iostream>
#include <cstdio>
#define in(a) scanf("%d",&a)
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            sum+=a;
        }
        if(sum%2==0)
        {
            if(k==1)
                cout<<"odd"<<endl;
            else
                cout<<"even"<<endl;
        }
        else
                cout<<"even"<<endl;
    }

    return 0;
}
