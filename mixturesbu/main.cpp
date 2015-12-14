#include <iostream>
#define inf (1<<30)
using namespace std;
int a[100];
    int ans[100][100];
int sum(int aa, int bb)
{
    int s=0;
    for(int i=aa;i<=bb;i++)
        s+=a[i];
    return s%100;

}
int main()
{
    int n;
    while(cin>>n){
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            ans[i][j]=inf;
        ans[i][i]=0;
    }
    for(int l=2;l<=n;l++)
    {
        for(int i=0;i<n-l+1;i++)
        {
            int j=i+l-1;
            int an=0;
            ans[i][j]=inf;
            for(int k=i;k<j;k++)
            {
                an=ans[i][k]+ans[k+1][j]+sum(i,k)*sum(k+1,j);
                if(an<ans[i][j])
                ans[i][j]=an;
            }
        }
    }
    /*for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>=i)
            cout<<ans[i][j]<<" ";
            else
            cout<<"0 ";
        }
            cout<<endl;
    }*/
    cout<<ans[0][n-1]<<endl;
    }
    return 0;
}
