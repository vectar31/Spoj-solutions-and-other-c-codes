#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t,n;
    ll sum;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(n==1)
        {
            printf("%d\n",0);
            continue;
        }
        sum = 1;
        ll end = sqrt(n);
        for(ll i=2;i<end;i++)
        {
            if(n%i==0)
                sum += i + n/i;
        }
        if(n%end==0i&&end!=1)
        {
            ll q = n/end;
            if(end==q)
                sum += q;
            else
                sum += end + q;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
