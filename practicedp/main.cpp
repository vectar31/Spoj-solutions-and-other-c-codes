#include <iostream>

using namespace std;
int lis(int a[],int n)
{
    if(n==1)
        return 1;
    int li[n];
    for(int i=0;i<n;i++)
        li[i]=1;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<=i;j++)
            {
                if ( a[i] > a[j] && li[i] < li[j] + 1)
                    li[i]=li[j]+1;
            }
    }int ma=0;
    for (int i = 0; i < n; i++ )
    if ( ma< li[i] )
        ma = li[i];
        return ma;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<lis(a,n)<<endl;
    return 0;
}
