#include <iostream>
using namespace std;
int hcf(int a,int b)
{
    if(a==b)
        return b;
    if(a>b)
        return hcf(a-b,b);
    else
        return hcf(a,b-a);
}

int main()
{
    int m = 65536;
    int M = 65535;
	register int n;
	unsigned g, v, a;
	char str[10];
	while(cin>>n!=0)
	{
		a = 1;
		while(n--)
		{
			cin>>str>>v;
			if(str[0]=='M')
			{
				a *= v;
				if(a >= m) a &= M;
			}
		}
		g = hcf(a, m);
		cout<<m/g<<endl;
	}
	return 0;
}
