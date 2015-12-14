#include <iostream>
#define in long long
using namespace std;
in gcd(in a, in b)
{
    if(a==b)
        return a;
    if(a>b)
        return gcd (a-b,b);
    return gcd (a,b-a);
}

in lcm(in a, in b)
{
    in temp = gcd(a, b);

    return temp ? (a / temp * b) : 0;
}
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        in n,m,a,d,c=0;
        cin>>n>>m>>a>>d;
        in lc=lcm()
    }
    return 0;
}
