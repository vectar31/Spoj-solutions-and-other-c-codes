#include <iostream>
#include <cstdio>
#define inf (1<<20)
using namespace std;

int main()
{
    int n;
    cin>>n;int c=1;
    while(n!=0)
    {

        int a[n][3];
        for(int i=0;i<n;i++)
            scanf("%d%d%d" , &a[i][0] , & a[i][1] , & a[i][2] );
        int b[n][3];
        for(int i=0;i<n;i++)
            b[i][0] = b[i][1] = b[i][2] = inf ;
        b[0][1]=a[0][1];
        //b[1][0]=a[1][0];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(j==0)
                {
                    if(b[i+1][j]>(b[i][j]+a[i+1][j]))
                       b[i+1][j]=b[i][j]+a[i+1][j];
                    if(b[i+1][j+1]>(b[i][j]+a[i+1][j+1]))
                       b[i+1][j+1]=b[i][j]+a[i+1][j+1];
                    if(b[i][j+1]>(b[i][j]+a[i][j+1]))
                       b[i][j+1]=b[i][j]+a[i][j+1];

                }
                if(j==1)
                {
                    if(b[i+1][j]>(b[i][j]+a[i+1][j]))
                       b[i+1][j]=b[i][j]+a[i+1][j];
                    if(b[i+1][j+1]>(b[i][j]+a[i+1][j+1]))
                       b[i+1][j+1]=b[i][j]+a[i+1][j+1];
                    if(b[i][j+1]>(b[i][j]+a[i][j+1]))
                       b[i][j+1]=b[i][j]+a[i][j+1];
                    if(b[i+1][j-1]>(b[i][j]+a[i+1][j-1]))
                       b[i+1][j-1]=b[i][j]+a[i+1][j-1];
                }
                if(j==2)
                {
                    if(b[i+1][j]>(b[i][j]+a[i+1][j]))
                       b[i+1][j]=b[i][j]+a[i+1][j];
                    if(b[i+1][j-1]>(b[i][j]+a[i+1][j-1]))
                       b[i+1][j-1]=b[i][j]+a[i+1][j-1];
                }
            }
        }
        cout<<c++<<". "<<b[n-1][1]<<endl;
        cin>>n;
    }
    return 0;
}
