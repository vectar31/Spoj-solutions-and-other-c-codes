#include<iostream>
using namespace std;
int main()
{
    long long N,K,M,ans;
    int t;
    cin>>t;
    while(t--)
    {
        int i=0;
        cin>>N>>K>>M;
        if(K <=M/N)
        {
           i++;

           ans = N*K;

           while( K <= M/ans)
           {
               i++;
               ans*=K;
           }

       }

        cout<<i<<endl;
    }
    return 0;
}
