#include <bits/stdc++.h>
#define ll long long
#define in(n) scanf("%d",&n)
using namespace std;
int L[1010][1010],ans[1010][1010],k;
string X,Y;
int lcs(int m, int n )
{
    int i, j,temp=0;
/* Following steps build L[m+1][n+1] in bottom up fashion. Note
that L[i][j] contains length of LCS of X[0..i-1] and Y[0..j-1] */
    for (i=0; i<=m; i++)
    {
        for (j=0; j<=n; j++)
        {
            if (i == 0 || j == 0)
                L[i][j] = 0;
            else if (X[i-1] == Y[j-1])
            {
                L[i][j] = L[i-1][j-1] + 1;
                temp++;
            }
            else
            {
                if(temp>=k)
                {
                    L[i][j] = max(L[i-1][j], L[i][j-1]);
                    ans[]
                }
            }
        }
    }
/* L[m][n] contains length of LCS for X[0..n-1] and Y[0..m-1] */
    return L[m][n];
}
int main()
{
    while(in(k),k)
    {
        cin>>X>>Y;
        int n1=X.length(),n2=Y.length();
        cout<<lcs(n1,n2)<<endl;;
    }
    return 0;
}
