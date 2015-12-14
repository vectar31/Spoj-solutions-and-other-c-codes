#include <iostream>
#include <string>
using namespace std;
int maxi(int a, int b)
{
    if(a>b)
        return a;
        return b;
}
int lcs( string X , string Y)
{
    int m=X.length();
    int n=Y.length();
    int L[m+1][n+1];
    int i, j;
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
    string s;
    cin>>s;
    while(s!="#")
    {
        string t;
        cin>>t;
        int n=lcs(s,t);
        //cout<<"papa"<<endl;
        int l1=s.length();
        int l2=t.length();
        int a=l1-n;
        int b=l2-n;
        int ans=a*15+b*30;
        cout<<ans<<endl;
        cin>>s;
    }
    return 0;
}
