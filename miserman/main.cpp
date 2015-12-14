#include <iostream>
#include <cstdio>
#define inf (1<<20)
using namespace std;
int n,m;
struct pos{
    int x;
    int y;
};
int xx[]={1,1,1};
int yy[]={1,0,-1};
pos next(int i, int j , int k)
{
    pos p;
    p.x=i;p.y=j;
    p.x+=xx[k];
    p.y+=yy[k];
    if(p.x>=0&&p.x<m&&p.y>=0&&p.y<n)
        return p;
    else
    {
        p.x=p.y=-1;
        return p;
    }

}
int main()
{
    cin>>n>>m;
    int a[n][m],ans[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
            ans[i][j]=inf;
        }
    for(int i=0;i<m;i++)
        ans[0][i]=a[0][i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            for(int k=0;k<3;k++)
            {
                pos p=next(i,j,k);
                if(p.x!=-1)
                {
                    if(ans[p.x][p.y]>=(ans[i][j]+a[p.x][p.y]))
                        ans[p.x][p.y]=ans[i][j]+a[p.x][p.y];
                }
            }
        }
    }
    int ansmin=inf;
    for(int i=0;i<m;i++)
    {
        if(ansmin>ans[n-1][i])
            ansmin=ans[n-1][i];
    }
    cout<<ansmin<<endl;
    return 0;
}
