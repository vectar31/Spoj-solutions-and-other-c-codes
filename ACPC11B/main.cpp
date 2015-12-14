#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int abso(int x)
{
    if(x>0)
        return x;
    return -x;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n1,n2;
        scanf("%d",&n1);
        int h1[n1];
        for(int i=0;i<n1;i++)
            scanf("%d",&h1[i]);
        scanf("%d",&n2);
        int h2[n2];
        for(int i=0;i<n2;i++)
            scanf("%d",&h2[i]);
        sort(h1,h1+n1);
        sort(h2,h2+n2);
        int ans=abso(h1[0]-h2[0]);
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                if(abso(h1[i]-h2[j])>ans)
                    break;
                else
                    ans=abso(h1[i]-h2[j]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
