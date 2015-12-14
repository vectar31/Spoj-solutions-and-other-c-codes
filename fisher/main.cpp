#include <iostream>
#include <cstdio>
using namespace std;
int t,n,anst,ansm;
int gm[101][101];
int gt[101][101];
bool visited[101];
void readinput(int a[][101])
{
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            scanf("%d" , &a[i][j]);
}
void dfs(int s, int time , int money)
{
    if(money>ansm)
        return;
    if(time>t)
        return;
    if(s==n)
    {
        if(ansm>money)
        {
            ansm=money;
            anst=time;
        }
        if(ansm==money && time < anst)
            anst=time;
        return;
    }
    // base cases finished
    // recursive dfs starts from  here.
    for(int i=1;i<=n;i++)
    {
        if(i!=s)
        {
            if(!visited[i])
            {
                visited[i]=true;
                dfs(i,time+gt[s][i],money+gm[s][i]);
                visited[i]=false;
            }
        }
    }
}
int main()
{

    scanf("%d%d" , &n , &t);
    while(n!=0)
    {
        for(int i=0;i<=n;i++)
            visited[i]=false;
        visited[1]=true;

        readinput(gt);
        readinput(gm);
        anst=10000000;
        ansm=10000000;
        dfs(1,0,0);
        scanf("%d%d" , &n , &t);
        cout<<ansm<<" "<<anst<<endl;
    }

    return 0;
}
