#include <iostream>
#include <cstdio>
using namespace std;
int gcd (int a , int b)
{
    /*if(a==b)
        return a;
    if(a>b)
        return gcd (a-b,b);
    return gcd (a,b-a);*/
    while(b)
    b^=a^=b^=a%=b;
    return a;
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(c%gcd(a,b)==0)
            printf("Case %d: Yes\n",i);
        else
            printf("Case %d: No\n",i);

    }
    return 0;
}
