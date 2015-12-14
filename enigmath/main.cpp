#include<iostream>
#define in long long int
using namespace std;
in gcd(in a,in b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
    in t,a,b,lcm;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a==b)
            cout << "1 1"<<endl;
        else
        {
            lcm=(a*b)/gcd(a,b);
            cout <<lcm/a <<" " << lcm/b<<endl;
        }
    }
    return 0;
}
