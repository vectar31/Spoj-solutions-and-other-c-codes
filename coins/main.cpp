#include <cstdio>
#include <iostream>
#include <map>
#include <algorithm>
# define in long long
using namespace std;
map < long long , long long > c;
map < long long , long long > :: iterator f;
in split(in n)
{
    if(n==0) return 0;
    f=c.find(n);//check if already calculated
    if(f==c.end())//if not found then calculate it
    {
        in t = max(n, split(n/2) + split(n/3) + split(n/4));
		c.insert(f, pair < in, in > (n,t));
		return t;
    }
    else
        return (*f).second;
}
int main()
{
    long  n;
    while(cin>>n)
    {
        c.clear();
        cout<<split(n)<<endl;
    }
    return 0;
}
