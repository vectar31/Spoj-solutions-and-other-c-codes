#include <iostream>
# define in long long int
using namespace std;
in gcd(in a, in b)
{
    for (;;)
    {
        if (a == 0) return b;
        b %= a;
        if (b == 0) return a;
        a %= b;
    }
}

in lcm(in a, in b)
{
    int temp = gcd(a, b);

    return temp ? (a / temp * b) : 0;
}
int main()
{
    in a,b;
    cin>>a>>b;
    while(a!=0)
    {
        cout<<lcm(a,b)<<endl;
        cin>>a>>b;
    }
    return 0;
}
