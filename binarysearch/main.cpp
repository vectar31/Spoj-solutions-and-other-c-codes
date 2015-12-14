#include <iostream>
#include <algorithm>
using namespace std;
int recurbin(int a[],int p, int r, int x)
{
    if(p>r)
        return -1;
    int q=(p+r)/2;
    if(a[q]==x)
        return q;//returning the position
    else
    {
        if(a[q]>x)
            return recurbin(a,p,q-1,x);
        else
            return recurbin(a,q+1,r,x);
    }
}
int main()
{
    int a[]={2,5,4,1,5,9,4,7,3,4,1,2};
    int n=12;
    sort(a,a+n);

    int l=0,h=n-1;
    int m=(l+h)/2;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<"enter element to be searched"<<endl;
    int s;cin>>s;
    //below is iterative look above for recursive approach;
    /*while(l<=h&&a[m]!=s)
    {
        if(a[m]<s)
            l=m+1;
        else
            h=m-1;
        m=(h+l)/2;
    }
    if(l>h)
        cout<<"not  found ";
    else
        cout<<"found at position"<<m+1;*/
    if(recurbin(a,0,n-1,s)!=-1)
        cout<<"found at "<<recurbin(a,0,n-1,s);
    else
        cout<<"Not found ";
    return 0;
}
