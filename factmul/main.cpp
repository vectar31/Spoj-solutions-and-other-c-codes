#include<iostream>
#define m 109546051211
using namespace std;

int main()
{
    long long int n,result=1,pro=1;
    long long int c= m;
    cin>>n;
    if(n>=587117)
        cout<<0<<endl;
    else{
    for(long long int i=2;i<=n;i++)
    {
        result = (result * i)%c;
        pro=(pro*result)%c;
    }
    cout<<pro<<endl;}
	return 0;
}
