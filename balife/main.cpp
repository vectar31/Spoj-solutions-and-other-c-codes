#include <bits/stdc++.h>
#define N 9010
#define in(n) scanf("%d",&n)
using namespace std;
int a[N];
int main()
{
    int n;
    while(in(n),n!=-1)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            in(a[i]);
            sum+=a[i];
        }
        if(sum%n!=0)
            cout<<-1<<endl;
        else
        {
            int temp=sum/n;
            int c=0;
            for(int i=0;i<n-1;i++)
            {
                int d=a[i]-temp;
                a[i+1]+=d;
                if(d<0)
                    d=-d;
                c=max(c,d);
            }
            cout<<c<<endl;
        }
    }
    return 0;
}
