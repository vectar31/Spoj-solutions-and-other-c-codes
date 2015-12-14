#include <cstdio>
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,n;
        cin>>k>>n;
        int r[k+9],a[k+9],c[100009]={0};
        int i,j,l=0,p=n%(k+1);
        for(i=0;i<k;i++)
        {
            cin>>a[i];
            if(a[i]<=k)
            c[a[i]]++;
        }
        for(j=0;j<=k;j++)
        if(c[j]==0)
        {
            r[l++]=j;
            c[j++]++;
            break;
        }
        for(i=0;i<=p;i++)
        {
        if(a[i]<=k)
        {
            c[a[i]]--;
            if(a[i]<=j && c[a[i]]==0)
            {
            r[l++]=a[i];
            c[a[i]]++;
            }
            else
            for(;j<=k;j++)
            {
                if(c[j]==0)
                {
                    r[l++]=j;
                    c[j++]++;
                    break;
                }
            }
        }
        else
            for(;j<=k;j++)
            {
                if(c[j]==0)
                {
                    r[l++]=j;
                    c[j++]++;
                    break;
                }
            }
        }
        cout<<r[p]<<endl;
    }
 return 0;
}
