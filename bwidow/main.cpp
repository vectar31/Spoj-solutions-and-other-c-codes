#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int t,n,ans;
    cin>>t;
    while(t--)
    {
        int ansr=-1,ansR=-1,ans=-1;
        int n;
        scanf("%d", &n);
        int r[n],R[n];
        for(int i=0 ;i<n;i++)
        {
            scanf("%d%d", &r[i], &R[i]);
            if(ansr<r[i])
            {
                ansr=r[i];
                ans=i+1;
            }
        }
        int f=1;
        for(int i=0;i<n;i++)
        {
            if(R[i]>ansr && i!=(ans-1))
            {
                f=0;
                break;
            }

        }
        if(f)
            printf("%d\n", ans);
        else
            printf("%d\n", -1);
    }
    return 0;
}
