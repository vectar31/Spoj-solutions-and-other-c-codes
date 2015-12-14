#include <bits/stdc++.h>
int a[2001];
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a,a+n);int ans=0,c=0;
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                int l1=a[i],l2=a[j];
                int x=l1+l2;
                int low=j+1,high=n-1;
                int mid= (low+high)/2;
                bool f=0;
                if(a[low]>x)
                    ans+=(n-low);
                else{
                while(low<=high )
                {
                    mid=(low+high)/2;
                    if(low==mid)
                    {
                        if(a[low]>x)
                            ans+=(n-low);
                        else if(a[high]>x)
                            ans+=(n-high);
                        break;
                    }
                    if(a[mid-1]<=x&&a[mid]>x)
                    {
                        f=1;
                        break;
                    }
                    if(a[mid]<=x)
                        low=mid+1;
                    else
                        high=mid-1;
                }
                //cout<<a[mid]<<endl;
                if(f)
                    ans+=(n-mid);}
                //cout<<c++<<" "<<a[i]<<" "<<a[j]<<" "<<ans<<endl;
            }
        }
        printf("%d\n",ans);
        scanf("%d",&n);
    }
    return 0;
}
