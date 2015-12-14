#include <iostream>
using namespace std;
int main()
{
    int m,n;cin>>m;cin>>n;
    int A[n],B[n],C[m+1];
    for(int i=0;i<=m;i++)
        C[i]=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;A[i]=a;
        C[a]+=1;
    }
    int l[m+1];l[0]=C[0];
    for(int i=1;i<=m;i++)
    l[i]=C[i]+l[i-1];
    for(int i=n-1;i>=0;i--)
    {
        int a=A[i];
        B[l[a]-1]=a;
        l[a]-=1;
    }
    for(int i=0;i<n;i++)
    cout<<B[i]<<endl;
    return 0;
}
