#include<iostream>
#include <algorithm>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a, b;
        cin>>a>>b;
        if(a<b)
            swap(a,b);
        ll temp=0;
        while(b!=0)
        {
            temp=a;
            a=b;
            b=temp%b;
        }
        while(a%2==0)
            a/= 2;
        if(a==1)
            cout<<"Y"<<endl;
        else
            cout<<"Y"<<endl;
    }
    return 0;
}
