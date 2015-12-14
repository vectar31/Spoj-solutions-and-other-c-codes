#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    while(n-->0)
        {int d;cin>>d;int i=1;
    double sum;while(i++<=d)sum+= i/(i*i +i+1)*(i*i -i+1);cout<<sum<<endl;}
}
