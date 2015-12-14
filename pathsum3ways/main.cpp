#include <bits/stdc++.h>
#define ll long long
#define inf (1<<20)
using namespace std;
int main()
{
   int n;
   cin>>n;
    int a[n][n];
   unsigned long long d[n][n];
   for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            {scanf("%d",&a[i][j]);d[i][j]=inf;}
    for(int i=0;i<n;i++)
        d[i][0]=a[i][0];
    for(int j=0;j<n-1;j++)
   {
       for(int i=0;i<n;i++)
       {
           int j1=j-1,i2=i-1,i3=i+1;
           if(j1>=0)
           {
               if(d[i][j]>a[i][j]+d[i][j1])
                    d[i][j]=a[i][j]+d[i][j1];
           }
           if(i2>=0)
           {
               if(d[i][j]>a[i][j]+d[i2][j])
                    d[i][j]=a[i][j]+d[i2][j];
           }
           if(i3<n)
           {
                if(d[i][j]>a[i][j]+d[i3][j])
                    d[i][j]=a[i][j]+d[i3][j];

           }

           j1=j+1;i2=i-1;i3=i+1;
           if(j1<n)
           {
               if(d[i][j1]>a[i][j1]+d[i][j])
                    d[i][j1]=a[i][j1]+d[i][j];
           }
           if(i2>=0)
           {
               if(d[i2][j]>a[i2][j]+d[i][j])
                    d[i2][j]=a[i2][j]+d[i][j];
           }
           if(i3<n)
           {
                if(d[i3][j]>a[i3][j]+d[i][j])
                    d[i3][j]=a[i3][j]+d[i][j];

           }
       }
   }
   unsigned long long ans=inf;
   for(int i=0;i<n;i++)
    ans=min(ans,d[i][n-1]);
   cout<<ans<<endl;
    return 0;
}
