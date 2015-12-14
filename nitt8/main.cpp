#include <iostream>
#include <cstdio>
using namespace std;
int min(int a, int b)
{
    if(a>b)
        return b;
    return a;
}
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
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        int fq=0,temp=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                temp=min(a[i],a[j])*abso(i-j);
                if(temp>fq)
                    fq=temp;
            }
        }
        printf("%d\n",fq);
    }
    return 0;
}
