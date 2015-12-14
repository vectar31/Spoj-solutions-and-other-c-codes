#include <iostream>
#include <algorithm>
using namespace std;
int recsearch(int a[],int p,int r, int x)
{
    int q;
    if(p>r)
        return -1;
    else
    {
        q=(p+r)/2;
        if(a[q]==x)
            return q;
        else
        {
            if(a[q]>x)
                return (recsearch(a,p,q-1,x));
            else
                return (recsearch(a,q+1,r,x));
        }
    }
}
int main()
{
    int a[]={1,5,6,6,7,9,4,1,3,4,5,7,6,8,6};
    int n=sizeof(a)/4;
    sort(a,a+n);
    int p=0,r=n-1,x;
    cin>>x;
    cout<<recsearch(a,p,r,x);
    return 0;
}
