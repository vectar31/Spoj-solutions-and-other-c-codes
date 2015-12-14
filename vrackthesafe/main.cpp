#include <iostream>
#include <cstdio>
#define M 1000000007
#define N 100001
using namespace std;

int main()
{
    long long ans[N];
    long long a[10][2];
    ans[0]=0;ans[1]=10;
    for(int i=0;i<10;i++)
        a[i][0]=1;
    for(int i=2;i<N;i++)
    {
        //if(i%2==0){
        a[0][1]=a[7][0]%M;
        a[1][1]=((a[2][0])+(a[4][0]))%M;
        a[2][1]=((a[1][0])+(a[5][0])+(a[3][0]))%M;
        a[3][1]=((a[2][0])+(a[6][0]))%M;
        a[4][1]=((a[1][0])+(a[5][0]+a[7][0]))%M;
        a[5][1]=(a[2][0]+a[4][0]+a[6][0]+a[8][0])%M;
        a[6][1]=(a[3][0]+a[5][0]+a[9][0])%M;
        a[7][1]=(a[4][0]+a[8][0]+a[0][0])%M;
        a[8][1]=(a[5][0]+a[7][0]+a[9][0])%M;
        a[9][1]=(a[6][0]+a[8][0])%M;
        long long sum = 0;
        for(int j=0;j<10;j++)
            sum+=a[j][1];
            ans[i]=sum%M;
        //}
        for(int j=0;j<10;j++)
            a[j][0]=a[j][1];

    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<ans[n]<<endl;
    }
    return 0;
}
