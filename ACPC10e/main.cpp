#include <iostream>
#include<cstdio>
#define in long long
using namespace std;

int main()
{
    int g,t,a,d;
    cin>>g>>a>>t>>d;
    in k,x;
    while(g!=-1)
    {
        int i;
        k =  (long long)g * a + d;
		for(i = 0; (1LL<<i) < k; i++);
		x =   (long long)t * (t-1) / 2 * g + (1LL<<i) - 1;
		in y=(1LL<<i) - k;
		cout<<g<<"*"<<a<<"/"<<t<<"+"<<d<<"="<<x<<"+"<<y<<endl;
		cin>>g>>t>>a>>d;
    }
    return 0;
}
