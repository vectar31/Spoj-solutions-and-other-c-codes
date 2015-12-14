#include<iostream>
using namespace std;
int main()
{
 long long int a[10000];
 a[1] = 3;
 a[2] = 7;
 int i = 2;
 while(a[i]<1e10)
 {
  a[i+1] = 2*a[i] + a[i-1];
  i++;
 }
 int n;
 cin>>n;
 cout<<a[n]<<endl;
}
