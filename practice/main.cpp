#include <iostream>
#include <cmath>
#include <algorithm>
#include <sstream>
#include <cstdlib>
#include <cstdio>
#define in long long
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i = 0 ;i< n; i++)
        cin>>a[i];
    for(int j=0;j<m;j++)
        cin>>b[j];
    in as=0,s=0,p=1;
    for(int j=0;j<m;j++)
        as+=b[j];
    for(int i=0;i<n;i++)
    {
        p=as*a[i];
        s+=p;
    }
    cout<<s;
    return 0;
}

