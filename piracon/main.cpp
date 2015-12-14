#include <iostream>
#define N 100001
using namespace std;int main(){long long a[N],b;a[0]=0;a[1]=1;for(int i=2;i<=N;i++)a[i]=a[i-1]+i*i+(i-1)*(i-1);int t,n;cin>>t;for(int i=1;i<=t;i++){cin>>n;b=2*n*(n-1);cout<<"Pyramid E. Nro# "<<i<<": "<<a[n]+b<<endl;cout<<"Tringus: "<<b<<endl;}return 0;}
