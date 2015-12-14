#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#define EPSILON 0.00000000001
using namespace std;
struct pos{
    double x;
    double y;
}a[201];
bool double_equals(double a, double b, double epsilon = 0.001)
{
    return std::abs(a - b) < epsilon;
}
int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
        int c=0,inf=0;
        double ans[n*n];
        for(int i=0;i<n;i++)
            cin>>a[i].x>>a[i].y;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                pos m;
                m.x=(a[i].x-a[j].x);
                m.y=(a[i].y)-a[j].y;
                if(m.x!=0)
                    {ans[c++]=double(m.y/m.x);cout<<m.x<<" "<<m.y<<" "<<ans[c-1]<<endl;}
                else
                    inf=1;
            }
        }
        sort(ans,ans+c);
        for(int i=0;i<c;i++)
           cout<<ans[i]<<" ";
        cout<<endl;
        cout<<inf <<endl;
        int fans=0;
        //cout<<c<<endl;
        for(int i=0;i<c;i++)
        {
            cout<<fans<<" "<<ans[i]<<endl;
            fans+=1;
            double temp=ans[i];
            while(double_equals(temp,ans[i]) && i<c)
                {cout<<ans[i]<<endl;i++;}

        }
        cout<<fans+inf<<endl;
        cin>>n;
    }
    return 0;
}
