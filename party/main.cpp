#include <iostream>
#define max(a,b) (a>b)?a:b
using namespace std;
int w[101],v[101],n,W,cost;
int knapsack()
{
    int ans[n+1][W+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=W;j++)
        {
            if(i==0||j==0)
                ans[i][j]=0;
            else
            {
                if(w[i]>j)
                    ans[i][j]=ans[i-1][j];
                else
                    {
                        ans[i][j]=max(ans[i-1][j],ans[i-1][j-w[i]]+v[i]);
                    }
            }

        }
    }
    /*for(int i=0;i<=W;i++)
        cout<<"("<<i<<" "<<ans[n][i]<<") ";
    cout<<endl;*/
    cost=ans[n][W];
    int i;
    for(i=W;i>=0;i--)
    {
        if(ans[n][i]<cost)break;
    }
    cost=i+1;
    return ans[n][W];
}
int main()
{
    cin>>W>>n;
    while(W!=0&&n!=0)
    {
        for(int i=1;i<=n;i++)
            cin>>w[i]>>v[i];
        cost=0;
        int fun=knapsack();
        cout<<cost<<" "<<fun<<endl;
        cin>>W>>n;
    }
    return 0;
}
