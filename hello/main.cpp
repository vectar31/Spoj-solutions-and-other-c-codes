#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    //cout<<"papa"<<endl;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,u;
        scanf("%d%d",&n,&u);
        int a[n+1],ans[n],l,r,d;
        for(int i=0;i<=n;i++)
            a[i]=0;
        for(int i=0;i<u;i++)
        {
            scanf("%d%d%d",&l,&r,&d);
            a[l]+=d;
            a[r+1]-=d;
        }
        cout<<endl;
        int res=0;
        for(int i=0;i<n;i++)
        {
            res+=a[i];
            ans[i]=res;
        }
        int m,q;
        scanf("%d",&m);
        for(int i=0;i<m;i++)
        {
            scanf("%d",&q);
            printf("%d\n",ans[q]);
        }
    }
    return 0;
}
