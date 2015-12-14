#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,r;
    cin>>t;
    while(t!=0)
    {
        r=0;
        int m=0,s=0;
        while(m<t)
        m+=pow(2,s++);
        cout<<s-1<<endl;
        cin>>t;
    }

}
