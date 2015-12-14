#include <bits/stdc++.h>
#define N 100000 // limit for array size
using namespace std;
int a[2*N];
int n;
void build()
{  // build the tree
    for(int i=n-1;i>0;i--)
        a[i]=a[2*i]+a[2*i+1];// here we are storing the parents of the nodes using their children
}
void modify(int pos , int val)// set value at position pos
{
    for(a[pos+=n]=val;pos>0;pos/=2)
        a[pos/2]=a[pos]+a[pos^1];
}
int sumquery(int l, int r)// sum on interval [l, r)
{
    int sum=0;
    for(l=l+n,r+=n;l<r;r/=2,l/=2)
    {
        if(l&1)sum+=a[l++];// if l is odd add the element and increase l by 1
        if(r&1)sum+=a[--r];// if r is odd add the element and decrease r by 1
    }
    return sum;
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[n+i];
    build();
    return 0;
}
