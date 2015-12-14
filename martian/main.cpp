#include <bits/stdc++.h>
#define N 510

using namespace std;
int ans[N][N],y[N][N],b[N][N];
int main()
{
    int n, m;
    cin>>n>>m;
    while(n!=0)
    {
        int pre;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                scanf("%d",&y[i][j]);
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                scanf("%d",&b[i][j]);
        int i,j,sum;
        for(i = 0; i < n; i++)
        {
            sum=0;
			for(j = 0; j < m; j++)sum+=b[i][j];
			pre = i > 0? ans[i-1][0] : 0;
			ans[i][0] = pre + sum;
			for(j = 1; j <= m; j++) {
				sum += y[i][j-1] - b[i][j-1];
				pre = i > 0? max(pre, ans[i-1][j]) : 0;
				ans[i][j] = pre + sum;
			}
		}
		sum =ans[i-1][0];
		for(j = 1; j <= m; j++)
			sum = max(sum, ans[i-1][j]);
		cout<<sum<<endl;
        cin>>n>>m;
    }

    return 0;
}
