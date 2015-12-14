#include <bits/stdc++.h>
#define ll long long
#define N
ll int numbers[N];
ll int store[N];
void sieve()
{
    ll int i,num,j;
    for(i=2;i<N;i++)
        numbers[i]=1;
    for(i=2;i<N;i++)
    {
        j=2;
        while((num = j*i) < N)
        {
            numbers[num]+=i;
            j++;
        }
    }
    store[0]=store[1]=0;
    for(i=2;i<N;i++)
        store[i]=store[i-1]+numbers[i];
}
int main()
{
    ll int t,i,n,j;
    sieve();
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        printf("%lld\n",store[n]);
	}
return 0;
}
