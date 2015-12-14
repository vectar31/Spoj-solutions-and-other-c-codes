#include <iostream>
#define N 501
using namespace std;
int n,m,time=0;
int grid[N][N];
bool valid (int x,int y)
{
    if(x>0&&x<=m&&y>0&&y<=n)
        return true;
    return false;
}
void filltime(int x,int y,int t)
{
    if(valid(x,y))
    {
        if(grid[x][y]==-1)
            {
                grid[x][y]==++t;
                if(time<t)
                    time=t;
            }
        filltime(x+1,)

    }


}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y;
        cin>>n>>m;
        cin>>x>>y;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
            grid[i][j]=-1;
        grid[i][j]=0;
        filltime(x,y,0);
        cout<<time<<endl;

    }
    return 0;
}
