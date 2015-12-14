#include <iostream>
#include <stack>
#include <cstdio>
#define ll long long
#define N 1000001
using namespace std;
ll a[N];
stack <ll> s;
int main()
{
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        ll ans=0;
        ll area=0;
        ll tp=0;
        int i=0;
        while(i<n)
        {
            if(s.empty()||a[s.top()]<=a[i])
                s.push(i++);
            else
            {
                tp=s.top();
                s.pop();
                area=a[tp] * (s.empty()?i:i-s.top()-1);
                if(area>ans)
                ans=area;
            }
        }
        while(!s.empty())
        {
            tp=s.top();s.pop();
            area=a[tp] * (s.empty()?i:i-s.top()-1);
            if(area>ans)
                ans=area;
        }
        printf("%d\n",ans);
        scanf("%d",&n);
    }
    return 0;
}
