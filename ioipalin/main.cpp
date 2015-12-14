#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int maxim(int x, int y)
{
    if(x>y)
        return x;
    else
        return y;
}
int lcs (char a[], char b[] , int n)
{
    //cout<<"papa"<<endl;
    //int l[n+1][n+1];
    int l2 [2][n+1];
    //cout<<"papa"<<endl;
    for(int i=0;i<=n;i++)
       l2[0][i]=0;
    l2[1][0]=0;
    int c=0;
    for(int i=1;i<=n;i++)
    {
        /*for(int k=0;k<=1;k++)
        {
        for(int m=0;m<=n;m++)
            cout<<l2[k][m]<<" ";
        cout<<endl;
        }*/
        for(int j=1;j<=n;j++)
        {
            /*if(a[i-1]==b[j-1])
                l[i][j]=l[i-1][j-1]+1;
            else
                l[i][j]=maxim(l[i-1][j],l[i][j-1]);*/
                if(a[i-1]==b[j-1])
                l2[i-c][j]=l2[i-c-1][j-1]+1;
            else
                l2[i-c][j]=maxim(l2[i-c-1][j],l2[i-c][j-1]);
            //cout<<l2[i-c][j]<<" "<<i<<endl;
        }
        //c+=1;
        /*cout<<"c="<<c<<endl;
        for(int k=0;k<=1;k++)
        {
        for(int m=0;m<=n;m++)
            cout<<l2[k][m]<<" ";
        cout<<endl;
        }*/
        for(int i=0;i<=n;i++)
            l2[0][i]=l2[1][i];
        l2[1][0]=0;
        c+=1;
    }
    return l2[1][n];

}
int main()
{
    int n;
    scanf("%d" , &n);
        char a[n+1],b[n+1];
        scanf("%s" , &a[0]);
        for(int i=n-1;i>=0;i++)
            b[i]=a[n-i];
        cout<<n-lcs(a,b,n)<<endl;
    return 0;
}
