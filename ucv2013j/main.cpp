#include <iostream>
#include <cstdio>
using namespace std;
int a[1000001];
int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        int nn=1,ans=0;;
        while (nn-1<n)
            nn*=2;
        nn/=2;
        nn--;
        nn-=(nn/2-(n-nn-1)/2);
        for (int i=nn; i<n; i++)
            ans+=a[i];
        cout<<ans<<endl;
        cin>>n;
    }
    return 0;
}
