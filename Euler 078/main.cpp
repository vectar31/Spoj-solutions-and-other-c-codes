#include <bits/stdc++.h>
#define ll long long
#define M 1000000007
using namespace std;
int table[20000][20000]={0};
int partitions(int n,int largestnum)
{
    if(n<0)
        return 0;
    if(n==0)
        return 1;
    if(largestnum==0)
        return 0;
    if(table[n][largestnum]!=0)
        return table[n][largestnum];
    table[n][largestnum]=((partitions(n,largestnum-1)%M)+(partitions(n-largestnum,largestnum)%M))%M;
    return table[n][largestnum];
}
int main()
{
    int a=partitions(19999,19998);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<table[n][n-1]+1<<endl;
    }
    return 0;
}
