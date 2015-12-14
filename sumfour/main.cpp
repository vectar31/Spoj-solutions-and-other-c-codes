#include <iostream>
#include <algorithm>
#define inf (1<<29)
using namespace std;
int binary(int e[],int k,int val)
{
    int size=0,temp=0,low=0,high=k,mid;
    while(low<=high)
    {
        mid=(high+low)/2;
        if(e[mid]==val)
        {
            temp=mid-1;
            while(mid<k&&e[mid]==val)
            {
                size++;
                mid++;
            }
            while(temp>=0&&e[temp]==val)
            {
                size++;
                temp--;
            }
            return size;
        }
        else if(e[mid]>val)
            high=mid-1;
        else
            low=mid+1;
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    int a[4000],b[4000],c[4000],d[4000],e[10000001],f[10000001];
    int l1=0,l2=0;
    for(int i=0;i<n;i++)
        cin>>a[i]>>b[i]>>c[i]>>d[i];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            e[l1++]=a[i]+b[j];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            f[l2++]=c[i]+d[j];
    //cout<<l1<<" "<<l2<<endl;
    sort(f,f+l2);
    //sort(e,e+l1);
    int ans=0;
    for(int i=0;i<l1;)
    {
        /*while(binary_search(f,f+l2,-e[i]))
        {
            ans++;
        }*/
        int temp=e[i];
        int l=0;
        while(temp==e[i]&&i<l1)
        {
            l++;
            i++;
        }
        int ll=binary(f,l2,-temp);
        ans+=(l*ll);
    }
    cout<<ans<<endl;
    return 0;
}
