#include <bits/stdc++.h>
#define M 1234
#define N 5678
using namespace std;
int a[M+1][N+1];
int main()
{
    int c=1;
    for(int i=1;i<=M;i++)
        for(int j=1;j<=N;j++)
            a[i][j]=c++;

    return 0;
}
