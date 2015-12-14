#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#include<stdio.h>
#include<math.h>
vector<bool> flag(162);
int primes[162],totalprimes;
vector< vector<long long int> > odd(5001);
void precompute()
{
   int j,k,i;
   for(i=3;i<318;i+=2)
      if(flag[i>>1]==0)
      {
         primes[totalprimes++]=i;
         k=i<<1;
         j=i+k;
         for(;j<318;j+=k)
            flag[j>>1]=1;
      }
}

int checkPrime(int n)
{
   if(n==1)
      return 0;
   for(int i=1;primes[i]*primes[i]<=n;i++)
      if(n%primes[i]==0)
         return 0;
   return 1;
}
int find_div(int n)
{
   int i,j,count=0,sum=1;
   for(i=0;n>1;i++)
   {
      for(count=0;n%primes[i]==0 && n>=primes[i];n/=primes[i])
         count++;
      if(count>0)
         sum=sum*((count<<1)+1);
      if(checkPrime(n))
         return sum*3;
   }
   return sum;

}

int main()
{
   primes[0]=2;
   totalprimes=1;
   precompute();
   int i,j;
   for(i=2;i<=100000;i++)
      odd[(find_div(i)>>1)].push_back(((long long )i)*i);
   int c;
   scanf("%d",&c);
   while(c--)
   {
      long long int l,h;
      int k,ans;
      vector<long long int>::iterator low,high;
      scanf("%d%lld%lld",&k,&l,&h);
      k>>=1;
      low=lower_bound(odd[k].begin(),odd[k].end(),l);
      high=upper_bound(odd[k].begin(),odd[k].end(),h);
      printf("%lld\n",(long long int)(high-low));
   }
}
