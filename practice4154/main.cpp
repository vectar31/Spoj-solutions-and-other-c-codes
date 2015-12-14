#include <iostream>

using namespace std;

int main()
{
    int n=5;
    int a[][5]={{6,5,5,5,5},{5,6,5,5,5},{5,5,6,5,5},{5,5,5,6,5},{5,5,5,5,6}};
    /*for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            cin>>a[i][j];*/
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[n-i-1][j]-=a[n-i-2][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[n-j-1][n-i-2]+=a[n-j-1][n-i-1];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
