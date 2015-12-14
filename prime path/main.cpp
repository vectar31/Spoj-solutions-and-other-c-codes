#include <iostream>
#include <cmath>
#define in long long int
using namespace std;
in gcd(in a, in b)
{
    if(a==b)
        return b;
    else if(a>b)
        return gcd(a-b,b);
    else
        return gcd(a,b-a);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        in a,b,x,y;
        cin>>a>>b>>x>>y;
        //x=(in)abs(x-a);y=(in)abs(y-b);
        cout<<gcd(a,b)<<" "<<gcd(x,y)<<endl;
        if(gcd(a,b)==gcd(x,y))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
