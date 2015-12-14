#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t)
    while(t-->0)
    {
        double n;scanf("%Lf", &n);
        printf("%.0Lf\n", n/2.0 * (7.0*n*n + 4.5*n + 1.0));
        }
    return 0;
}
