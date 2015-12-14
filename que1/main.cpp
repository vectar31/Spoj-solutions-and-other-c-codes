#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pi;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        pi a[n];
        int ans[n];
        memset(ans,0,sizeof ans);
        for(int i=0;i<n;i++)
            scanf("%d",&a[i].first);
        for(int i=0;i<n;i++)
            scanf("%d",&a[i].second);
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            int temp=a[i].second;
            for(int j=0;j<n;j++)
            {
                if(temp==0&&ans[j]==0)
                    {
                        ans[j]=a[i].first;
                        break;
                    }
                    if(ans[j]==0)
                        temp--;

            }
        }
        for(int i=0;i<n;i++)
            printf("%d ",ans[i]);
        printf("\n");


    }
    return 0;
}
