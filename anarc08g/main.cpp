#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int c=1;
    while(n!=0)
    {
        int a[n][n];
        int B=0,A=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                scanf("%d", &a[i][j]);
                B+=a[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            int s=0;
            for(int j=0;j<n;j++)
            {
                s+=(a[i][j]-a[j][i]);
            }
            if(s>0)
                A+=s;
        }
        printf("%d. %d %d\n", c, B, A);
        scanf("%d", &n);
        c++;
    }
    return 0;
}
