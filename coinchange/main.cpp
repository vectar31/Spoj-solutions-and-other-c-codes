#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n;cin>>n;
    int v[n];
    for(int i=0;i<n;i++)
        cin>>v[i];
    int p;
    cin>>p;
    int table[p+1];
    table[0]=1;
    for(int i=1;i<=p;i++)
        table[i]=0;
    for(int i=0;i<n;i++)
        for(int  j=v[i];j<=p;j++)
            table[j]+=table[j-v[i]];
    for(int i=0;i<=p;i++)
        cout<<table[i] <<" ";
    //cout<<table[p];
    return 0;
}
