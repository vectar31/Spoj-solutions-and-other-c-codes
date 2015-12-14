#include <bits/stdc++.h>
#define N 3001
using namespace std;
int pro[N];
int main()
{
    for(int n=1;n<N;n++){
            bool f=0;int ans=0;
    for(int i=1;i<=n/2;i++)
        {
            for(int j=i+1;j<n/2;j++)
            {
                int a=i,b=j,c=n-(i+j);
                if(c>a&&c>b)
                {
                    if((a*a+b*b)==c*c)
                    {
                        if(ans<a*b*c)
                            ans=a*b*c;
                        f=1;
                    }
                }
                else
                    break;

            }
        }
        if(f)
            pro[n]=ans;
        else
            pro[n]=-1;
    }
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        printf("%d\n",pro[n]);
    }
    return 0;
}
