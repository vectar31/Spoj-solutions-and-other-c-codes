#include <bits/stdc++.h>
#define ll long long
#define N 50001
using namespace std;
int psol[N]={0};
int ans[N]={0};
int main()
{
    for(int p=2;p<N;p+=2)
    {
        int c=0;
        for(int j=2;j<p/3;j++)
        {
            int a=j;
            if(p*(p-2*a) % (2*(p-a)) == 0)
                c++;
        }
        psol[p]=c;
    }
    int maxans=0,maxp=0;
    for(int i=0;i<N;i++)
    {
        if(psol[i]>maxans)
            {
                maxans=psol[i];
                maxp=i;
            }
        ans[i]=maxp;
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        printf("%d\n",ans[n]);
    }
    return 0;
}
