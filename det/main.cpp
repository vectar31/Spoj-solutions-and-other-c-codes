#include <iostream>
#define n 4
using namespace std;
int main()
{
    float a[][n]={{1,2,3,4},{5,6,7,8},{9,10,1,12},{13,14,15,16}};
    for(int i=0;i<n-1;i++)
    {
            for(int j=0;j<n-1;j++)
            {
                float r = a[j+1][j]/a[i][j];
                for(int k= 0 ;k < n; k++)
                {
                    a[j+1][k]-=(a[i][k]*r);
                }
            }
    }
    for(int i = 0 ; i< n ; i++ )
    {
        for(int j= 0 ; j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
