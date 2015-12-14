#include <bits/stdc++.h>
#define N 1000001
#define ll long long
using namespace std;
bool prime[N];
ll sum[N]={0};
int main()
{
    for(int i=0;i<N;i++)
        prime[i]=1;
    prime [0]=0;prime[1]=0;
    for(int i=2;i*i<=N;i++)
        if(prime[i])
            for(int j=2;i*j<=N;j++)
                prime[i*j]=0;
    for(int i=11;i<N;i++)
    {
        bool f=1;
        if(prime[i])
        {
            int temp1=i/10,temp2=i;
            while(temp1!=0)
            {
                if(prime[temp1])
                    temp1/=10;
                else
                    {
                        f=0;
                        break;
                    }
            }
            if(f)
            {
                int temp=10;

               while(temp2/temp!=0){
               if(prime[temp2%temp])
               {
                   temp=temp*10;
               }
               else
               {
                 f=0;
                 break;
               }}
            }
        }
        else
            f=0;
        //if(f)
          //  cout<<i<<endl;
        if(f)
            sum[i]=sum[i-1]+i;
        else
            sum[i]=sum[i-1];
    }
        int n;
        cin>>n;
        cout<<sum[n]<<endl;
    return 0;
}
