#include <iostream>
#include <cstdio>
using namespace std;
int a[100001];
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m;
		scanf("%d%d",&n,&m);
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		int ans1=(1<<20);
		int ans2=0;
		int p=0,q=0,sum=a[0];
		while(q<n && p<n-1)
		{
			if(sum<=m)
			{
				if(q-p+1>ans2)
				{
					ans2=q-p+1;
					ans1=sum;
				}
				else
					if(q-p+1==ans2)
						ans1=min(ans1,sum);
			}
			if(sum<m)
			{
				q++;
				sum+=a[q];
			}
			else
			{
				p++;
				sum-=a[p-1];
			}
		}
		printf("%d %d\n",ans1,ans2);
	}
	return 0;
}





