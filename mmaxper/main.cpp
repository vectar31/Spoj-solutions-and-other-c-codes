#include <iostream>
#include <cstdio>
using namespace std;
int maxim (int a , int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int abso ( int x )
{
    if(x>0)
        return x;
    else
        return -x;
}
int main()
{
    int n;
    cin>>n;
    int h[n],w[n];
    for(int i=0;i<n;i++)
        scanf("%d%d" ,  &w[i] , &h[i]);
    int ans[2][n];
    ans[0][0]=w[0];
    ans[1][0]=h[0];
    for(int i=1;i<n;i++)
    {
        ans[0][i]=maxim( ans[0][i-1] + w[i] + abso(h[i-1]-h[i]) , ans [1][i-1] + w[i] + abso (h[i]-w[i-1]) );
        ans[1][i]=maxim( ans[0][i-1] + h[i] + abso(h[i-1]-w[i]) , ans [1][i-1] + h[i] + abso (w[i]-w[i-1]) );
    }
    cout<<maxim(ans[0][n-1],ans[1][n-1])<<endl;
    return 0;
}
