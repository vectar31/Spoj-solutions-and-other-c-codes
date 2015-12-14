#include <iostream>
#include <cstdio>
using namespace std;
int maxi(int a, int b)
{
return (a > b)? a : b;
}
int lcs( int *X, int *Y, int m, int n )
{
int L[m+1][n+1];
int i, j;
/* Following steps build L[m+1][n+1] in bottom up fashion. Note
that L[i][j] contains length of LCS of X[0..i-1] and Y[0..j-1] */
for (i=0; i<=m; i++)
{
for (j=0; j<=n; j++)
{
if (i == 0 || j == 0)
L[i][j] = 0;
else if (X[i-1] == Y[j-1])
L[i][j] = L[i-1][j-1] + 1;
else
L[i][j] = maxi(L[i-1][j], L[i][j-1]);
}
}
return L[m][n];
}
int main()
{
    int t, len1, len2, n, best;
	scanf("%d", &t);
	while(t--)
	{
	    int A[2002],B[2002];
		len1 = best = 0;
		while(scanf("%d", &n)==1 && n)
			A[len1++] = n;
		while(scanf("%d", &n)==1 && n)
		{
			len2 = 0;
			B[len2++] = n;
			while(scanf("%d", &n)==1 && n)
				B[len2++] = n;
			best = max(best, lcs(A,B,len1, len2));
		}
		printf("%d\n", best);
	}
    return 0;
}
