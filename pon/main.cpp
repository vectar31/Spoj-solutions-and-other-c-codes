#include <iostream>
#include <cmath>
#include <cstdlib>
# define ll unsigned long long
using namespace std;
ll mulmod(ll a, ll b, ll mod)
{
    ll x = 0,y = a % mod;
    while (b > 0)
    {
        if (b&1)
            x = (x + y) % mod;
        y = (y * 2) % mod;
        b /= 2;
    }
    return x;
}
ll modulo(ll base, ll exponent, ll mod)
{
    ll x = 1;
    ll y = base%mod;
    while (exponent > 0)
    {
        if (exponent&1)
            x = mulmod(x,y,mod);
        y = mulmod(y,y,mod);
        exponent/=2;
    }
    return x;
}
bool Miller(ll p,int iteration)
{
    if(p<2) return false;
	if(p==2) return true;
	if(!(p&1)) return false;
	ll s = p-1, a, temp, mod;
	while(!(s&1)) s = s>>1;
	for(int i=0; i<iteration; i++)
	{
		a = rand()%(p-1)+1;
		temp = s;
		mod = modulo(a, temp, p);
		while(temp!=p-1 && mod!=1 && mod!=p-1)
		{
			mod = mulmod(mod, mod, p);
			temp = temp<<1;
		}
		if(mod!=p-1 && !(temp&1)) return false;
	}
	return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s=Miller(n,1)?"YES":"NO";
        cout<<s<<endl;
    }
    return 0;
}
