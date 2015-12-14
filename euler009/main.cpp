#include <bits/stdc++.h>
#define N 4250
using namespace std;
int s[N];
int main()
{
    for(int i=0;i<N;i++)
        s[i]=i*i;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        bool f=0;int ans=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=i;j<=n;j++)
            {
                if(binary_search(s,s+n))
            }
        }
    }
    return 0;
}
