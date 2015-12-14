#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
using namespace std;
int gcd (int a,int b)
{
    while(b)
        b^=a^=b^=a%=b;
    return a;
}
int solve (int a)
{
    int ans=0;
    for(int i=1;i*i<=a;++i)
    {
        if(i*i==a)
            ans++;
        else if(a%i==0)
                ans+=2;
    }
    return ans;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        int temp=gcd(a,b);
        int ans=solve(temp);
        printf("%d\n",ans);
    }

    return 0;
}
