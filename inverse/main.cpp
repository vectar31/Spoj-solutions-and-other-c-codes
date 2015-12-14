#include <iostream>
#include <cmath>
using namespace std;
int n;
double determinant(double a[][n])
{
    double d=0, submatrix[n][n]; int s1=0,s2=0,c=0;
    if(n<1)
        return 0;
    if(n==1)
        return a[0][0];
    if(n==2)
      return a[0][0] * a[1][1] - a[1][0] * a[0][1];
    for(int i=0;i<n;i++)
    {
        s1=0;
        for(int j=1;j<n;j++)
        {
            s2=0;
            for(int k=0;k<n;k++)
            {
                if(k==i)
                    continue;
                submatrix[s1][s2] = a[j][k];
                s2++;
            }
            s1++;
        }
        d = d +(pow(-1,c)*a[0][c] * determinant(n-1,submatrix));
    }
    return d;
}
int main()
{
    cin>>n;
    double a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    }
    cout<<determinant(a)
    return 0;
}
