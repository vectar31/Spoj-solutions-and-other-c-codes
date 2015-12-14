#include <iostream>
using namespace std;
int largest(int a[],int n)
{
    int l=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>a[0])
            l=a[i];
    }
    return l;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int la=largest(a,n);int d=0;
    while(la!=0)
    {
        d++;
        la/=10;
    }
    for(int i=1;i<=d;i++)
    {

    }
    return 0;
}
