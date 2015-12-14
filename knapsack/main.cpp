#include <iostream>
#include <vector>

int max_treasure(int N, std::vector< std::vector< int > > coins, int P) {
int n=N,W=P;
int w[n+1],v[n+1];
for(int i=1;i<=n;i++)
    {
        v[i]=coins[i-1][0];
        w[i]=coins[i-1][1];
    }
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
                  if(ans[i-1][j]>ans[i-1][j-w[i]]+v[i])
                    ans[i][j]=ans[i-1][j];
                  else
                    ans[i][j]=ans[i-1][j-w[i]]+v[i];
                }
            }

        }
    }
    return ans[n][W];
}
int main()
{
    return 0;
}
