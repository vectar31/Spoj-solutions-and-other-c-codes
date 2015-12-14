#include <bits/stdc++.h>
#define ll long long

using namespace std;
int check[10000010];
ll ans[10000010];
void calculate()
{
    for(int i=2;i<=10000000;i++)
    {
        if(!check[i])
        {
            for(int j=i+i;j<=10000000;j+=i)
                if(!check[j])
                    check[j]=i;
            ans[i]=ans[i-1]+i;
        }
        else
        ans[i]=ans[i-1]+check[i];
    }
}
int main()
{
    calculate();
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
