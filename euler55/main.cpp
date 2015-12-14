#include <bits/stdc++.h>
#define N 100001

using namespace std;
bool pal(int n)
{
    int num=n;
    int temp=0;
    while(num!=0)
    {
        temp=temp*10+(num%10);
        num/=10;
    }
    if(temp==n)
        return true;
    return false;
}
int main()
{
    int n;
    cin>>n;
    int anspal=0,anscount=0;
    if(n<=)
    return 0;
}
