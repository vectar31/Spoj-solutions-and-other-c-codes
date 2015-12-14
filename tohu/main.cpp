#include<iostream>
#include <iomanip>
#include <cstdio>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n;
        cin>>n;
        double a;
        a=(3.0/4.0)+(1.0/(2*(n+2)))-(1.0/(2*(n+1)));
        cout<<fixed<<setprecision(11)<<a<<endl;
    }
    return 0;
}
