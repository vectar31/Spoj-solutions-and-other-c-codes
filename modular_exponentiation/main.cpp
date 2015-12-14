#include <bits/stdc++.h>
#define ll long long
#define M 1000000007
using namespace std;
ll moddexp(int a, int b)//This function calculates a to the power b mod M
{
    ll res=1,y=a;
    while(b>0)
    {
        if(b&1)
            res=((res%M)*(y%M))%M;
        y=((y%M)*(y%M))%M;
        b/=2;
    }
    return res;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
