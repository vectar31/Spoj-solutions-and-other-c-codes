#include <iostream>
#include <cstdio>
using namespace std;
int arr[101];
int ans[101][101];
int cost(int aa , int bb)
{
    int sum=0;
    for(int i=aa;i<=bb;i++)
        {
            sum+=arr[i];
            sum%=100;
        }
    return (sum);
}
int calculate(int a , int b)
{
    if(ans[a][b]!=-1)
		return ans[a][b];
    if(a==b)
		return 0;
    int ret=ans[a][b];
    for(int k=a;k+1<=b;k++){
        int temp=calculate(a,k)+calculate(k+1,b)+cost(a,k)*cost(k+1,b);
        if(ret==-1||temp<ret)
			ret=temp;
    }
    return (ans[a][b]=ret);
}
int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=1;i<=n;i++)
            scanf("%d",&arr[i]);
        for(int i=0;i<=n;i++)
            for(int j=0;j<=n;j++)
                ans[i][j]=-1;
        printf("%d\n",calculate(1,n));
    }
    return 0;
}
