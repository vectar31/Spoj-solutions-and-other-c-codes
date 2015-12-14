#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n],ans=0;
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    for(int i=0;i<n;i++)
        if(i<n-1&&binary_search(a+i+1,a+n,m-a[i]))
                ans++;
    printf("%d\n",ans);}
    return 0;
}
