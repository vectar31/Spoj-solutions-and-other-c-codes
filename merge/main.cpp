#include <iostream>

using namespace std;
void mergesort(int A,int n)
{
    if(n<2)
        return ;
    int mid=n/2;
    int l[mid];int r[n-mid];
    for(int i=0;i<mid;i++)
        l[i]=A[i];
    for(int i=mid;i<n;i++)
        r[i-mid]=A[i];
    mergesort(l);mergesort(r);
    mergetwo(l,r,A)
}
void mergetwo(int a[],int b[],int A[])
{
    int m=a.length;int n=b.length();
    int l=m+n;
    int i=0;
    int ma=0,na=0;
    while(i<l)
    {
        if(a[ma]>a[na])
        {
            A[i++]=a[na];
            na+=1;
        }
        else
        {
            A[i++]=a[ma];
            ma+=1;
        }
    }

}
int main()
{
    int a[]={2,5,6,7};
    int b[]={2,4,5,8};
    mergetwo(a,b);
    return 0;
}
