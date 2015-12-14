#include <bits/stdc++.h>
#define ll long long
#define N 30000001
using namespace std;
bool checksqr(int a)
{
    int s=sqrt(a);
    if(s*s==a)
        return true;
    return false;
}
bool checktri(int a)
{
    int s=1+(8*a);
    int sq=sqrt(s);
    if(sq*sq==s && sq&1 )
        return true;
    return false;
}
bool checkpent(int a)
{
    int s=1+(24*a);
    int sq=sqrt(s);
    if(sq*sq==s)
        if((sq+1)%6==0)
            return true;
    return false;
}
bool checkhex(int a)
{
    int s=1+(8*a);
    int sq=sqrt(s);
    if(sq*sq==s)
        if((sq+1)%4==0)
            return true;
    return false;
}
bool checkhept(int a)
{
    int s=(40*a + 9);
    int sq=sqrt(s);
    if(sq*sq==s)
        if((sq+3)%10==0)
            return true;
    return false;
}
bool checkoct(int a)
{
    int s=(12*a + 4);
    int sq=sqrt(s);
    if(sq*sq==s)
        if((sq+2)%6==0)
            return true;
    return false;
}
int main()
{

    return 0;
}
