#include <iostream>

using namespace std;
int hcf (int a, int b)
{
	while(b) b ^= a ^= b ^= a %= b;
	return a;
}
int main()
{
    int m,n;
    cin>>m>>n;
    while(m!=0)
    {
        int h=hcf(m,n);
        m=m/h;n=n/h;
        cout<<((m+n-2)<<2)<<endl;
        cin>>m>>n;
    }
    return 0;
}
