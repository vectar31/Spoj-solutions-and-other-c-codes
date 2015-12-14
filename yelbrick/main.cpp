#include <iostream>
#define ll long long
using namespace std;
struct cuboid{
    int x,y,z;
};
int gcd (int a , int b)
{
    if(a==b)
        return a;
    if(a>b)
        return gcd(a-b,b);
    return gcd (a,b-a);
}
int main()
{
    int n;
    cin>>n;
    while (n!=0)
    {
        cuboid a[n];
        int g=0;
        for(int i=0;i<n;i++)
            cin>>a[i].x>>a[i].y>>a[i].z;
        g=a[0].x;
        for(int i=0;i<n;i++)
        {
            int gg=gcd(a[i].y,a[i].z);
            gg=gcd(gg,a[i].x);
            g=gcd(g,gg);
        }
        ll ggg=g*g*g;
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            ll temp=a[i].x * a[i].y * a[i].z;
            ans+=(temp/(ggg));
        }
        cout<<ans<<endl;
        cin>>n;
    }
    return 0;
}
