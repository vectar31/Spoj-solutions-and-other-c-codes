#include <bits/stdc++.h>
#define ll long long
#define N 40000
#define n 3010
using namespace std;
int ans[n];
bool lucky[N];


void calculate()
{
    int c=1;
    memset(lucky,true,sizeof lucky);
    for(int i=2;i<N;i++)
    {
        if(!lucky[i])
            continue;
        ans[c++]=i;
        int x=0;
        for(int j=i+1;j<N;j++)
        {
            if(lucky[j])
                x++;
            if(x%i==0)
                lucky[j]=false;
        }/*
    cout<<c<<endl;
    for(int i=2;i<=30;i++)
        if(lucky[i])
            cout<<i<<" ";
            cout<<endl;*/
    }

}
int main()
{
    calculate();
    int k;
    while(scanf("%d",&k) , k!=0)
        printf("%d\n",ans[k]);
    return 0;
}
