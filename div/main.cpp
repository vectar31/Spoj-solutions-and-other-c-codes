#include<bits/stdc++.h>
#define N 1010

using namespace std;
bool prime[N];
vector <int> primes;
void seive()
{
    for(int i=0;i<N;i++)
        prime[i]=1;
    prime [0]=0;prime[1]=0;
    for(int i=2;i*i<=N;i++)
        if(prime[i])
            for(int j=2;i*j<=N;j++)
                prime[i*j]=0;
    primes.push_back(2);
    for(int i=3;i<N;i+=2)
        if(prime[i])
            primes.push_back(i);
}
bool isPrime(int n)
{
    if(n<2)return false;
    if(n==2)return true;
    for(int i=3;i*i<=n;i+=2)
        if(n%i==0)return false;
    return true;
}
int indexin()
{
    seive();
    int index = -1;
    int position = 0;
    for(int i=1;i<=1000000;i++)
    {
        int temp=i;
        int total=1;
        int k=0;
        for(int j=primes[k]; k < primes.size() && j*j<=temp;j=primes[++k])
        {
            int count=0;
            while(temp%j==0)
            {
                count++;
                temp/=j;
            }
            total *=count+1;
        }
        if(temp!=1)
            total*=2;
        k = 0;
        for(int j = primes[k] ;k<primes.size() &&  j*j <= total ; j = primes[++k]){
            if(total%j == 0){
                int x = total / j;
                if(x!= j && isPrime(x)){
                    position++;
                    if(position%9 == 0)
                        printf("%d\n", i);
                    break;
                }
            }
        }
    }
    return 0;
}
