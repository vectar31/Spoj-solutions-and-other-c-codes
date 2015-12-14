#include <iostream>
#include <cstdio>
#define in unsigned long long
using namespace std;

int main()
{
    in n;
    cin>>n;
    while(n!=0)
    {
        int p=0;in i=2,co=0,ile=0;
        while(i*i<=n)
        {
            co=ile=0;
            if(n%i==0)
            {
                co=i;
                while(n%i==0)
                {
                    ++ile;
                    n/=i;
                }
                printf("%d^%d ",co,ile);
            }
            if(n==1)break;
            ++i;
        }
        cin>>n;
    }
    return 0;
}
/*#include<cstdio>
typedef unsigned long long ull;
ull n;
int main(void)
{

    while(~scanf("%llu",&n))
    {
        ull i=2;
        int ile,co;
        while(i*i<=n)
        {
            co=ile=0;
            if(n%i==0)
            {
                co=i;
                while(n%i==0)
                {
                    ++ile;
                    n/=i;
                }
                printf("%d^%d ",co,ile);
            }
            if(n==1)break;
            ++i;
        }
        if(n>1)printf("%llu^1",n);
        puts("");
    }
return 0;
}
*/
