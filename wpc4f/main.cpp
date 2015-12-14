#include <iostream>
#define inf (1<<20)
using namespace std;
int a[21][3];
int ans[21][3];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<3;j++)
                cin>>a[i][j];
            ans[0][i]=a[0][i];
        }
        for(int i=1;i<n;i++)
            for(int j=0;j<3;j++)
                ans[i][j]=inf;
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(j==0)
                {
                    //if(ans[i+1][j]>ans[i][j]+a[i+1][j])
                      //  ans[i+1][j]=ans[i][j]+a[i+1][j];
                    if(ans[i+1][j+1]>ans[i][j]+a[i+1][j+1])
                        ans[i+1][j+1]=ans[i][j]+a[i+1][j+1];
                        if(ans[i+1][j+2]>ans[i][j]+a[i+1][j+2])
                        ans[i+1][j+2]=ans[i][j]+a[i+1][j+2];
                }
                else if(j==2)
                {
                    //if(ans[i+1][j]>ans[i][j]+a[i+1][j])
                      //  ans[i+1][j]=ans[i][j]+a[i+1][j];
                    if(ans[i+1][j-1]>ans[i][j]+a[i+1][j-1])
                        ans[i+1][j-1]=ans[i][j]+a[i+1][j-1];
                    if(ans[i+1][j-2]>ans[i][j]+a[i+1][j-2])
                        ans[i+1][j-2]=ans[i][j]+a[i+1][j-2];

                }
                else
                {
                 //   if(ans[i+1][j]>ans[i][j]+a[i+1][j])
                   //     ans[i+1][j]=ans[i][j]+a[i+1][j];
                    if(ans[i+1][j-1]>ans[i][j]+a[i+1][j-1])
                        ans[i+1][j-1]=ans[i][j]+a[i+1][j-1];
                    if(ans[i+1][j+1]>ans[i][j]+a[i+1][j+1])
                        ans[i+1][j+1]=ans[i][j]+a[i+1][j+1];


                }
            }
        }
        /*for(int i=0;i<n;i++)
            {for(int j=0;j<3;j++)
                cout<<ans[i][j]<<" ";
        cout<<endl;*/
            //}
        int res=inf;
        for(int i=0;i<3;i++)
        {
            if(ans[n-1][i]<res)
                res=ans[n-1][i];
        }
        cout<<res<<endl;
    }
    return 0;
}
