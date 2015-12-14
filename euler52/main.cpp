#include <bits/stdc++.h>

using namespace std;
bool check(int a , int b)
{

    int ad[10];
    int bd[10];
    for(int i=0;i<10;i++)
        ad[i]=bd[i]=0;
    while(a!=0)
    {
        ad[a%10]+=1;
        a/=10;
    }
    while(b!=0)
    {
        bd[b%10]+=1;
        b/=10;
    }
    for(int i=0;i<10;i++)
        if(ad[i]!=bd[i])
        return false;
    return true;
}
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=125874;i<=n;i++)
    {
        bool f=1;
        int x=i;
        for(int j=2;j<=k;j++)
        {
            if(!check(x,j*x))
            {
                f=0;
                break;
            }
        }
        if(f)
        {
            for(int j=1;j<=k;j++)
                cout<<j*x<<" ";
            cout<<endl;
        }
    }
    return 0;
}
