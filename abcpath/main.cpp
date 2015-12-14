#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;
int m,n;
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
char a[60][60];
int d[60][60];
//bool visited[101];
int dfs(int r,int c,char s)
{
    if(d[r][c]!=-1)
        return d[r][c];
    int cur=1;
    for(int i=0;i<8;i++)
    {
        if (r+dx[i]<0||r+dx[i]>=m||c+dy[i]<0||c+dy[i]>=n)
            continue;
        if (a[r+dx[i]][c+dy[i]] == s)
            cur = max(cur, 1+dfs(r+dx[i],c+dy[i],s+1));
    }
    d[r][c]=cur;
    return cur;
}
int main()
{
    scanf("%d%d" , &m , &n);
    int t=1;
    while(n!=0)
    {
        for(int i=0;i<m;i++)
            scanf("%s" ,a[i]);
        int ans=0;
        memset(d, -1, sizeof d);
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(a[i][j]=='A')
                    ans=max(ans,dfs(i,j,'A'+1));
        cout<<"Case "<<t++<<": "<<ans<<endl;
        cin>>m>>n;
    }
    return 0;
}
