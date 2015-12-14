#include <bits/stdc++.h>
/*
This is the combinatorial solution to the problem.
Here we will assume |s|=n;
So we define a function  f(x) is the number of character-wise subsequences of such palindrome of length x, which are palindrome.
We have f(1)=1,f(2)=3 and one can easily find out that f(n)=3+2×f(n−2) by mathematical induction.
This can be solved to get :
f(n)=3×2^⌈n/2⌉−3 if n is even
f(n)=2×2^⌈n/2⌉−3 if n is odd
*/
#define ll long long
#define M 1000000007
using namespace std;
ll modexp(int a, int b)//This function calculates a to the power b mod M
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
ll calculate(int n)
{
    if(n==1)
        return 1;
    if(n==2)
        return 3;
    return (3+2*calculate(n-2))%M;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.length();
        ll res=calculate(n);
        ll ans=modexp(2,n)-1-res;
        cout<<ans<<endl;
    }
    return 0;
}
