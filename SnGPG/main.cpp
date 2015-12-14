#include <iostream>

using namespace std;
//figure out why this question turned out to be easy counting
int counting(int a,int b)
{
    int c=0;
	if(a<=0 && b>=0)
        c++;
	if(a<=1 && b>=1)
        c++;
	if(a<=2 && b>=2)
        c++;
	if(a<=3 && b>=3)
        c++;
    return c;
}
int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout<<counting(a,b)<<endl;
    }
    return 0;
}
