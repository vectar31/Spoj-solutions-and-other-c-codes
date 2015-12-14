#include <bits/stdc++.h>
#define ll long long

using namespace std;
//string fr, ba, le, ri, to, bo;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        ll k,ans=0,leftover=0,sum=0;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            int temp=a;
            while(temp!=0)
            {
                if(temp<=leftover)
                {
                    leftover-=temp;
                    if(leftover>0)
                        leftover--;
                    temp=0;
                }
                else if(temp>=k)
                {
                    ans+=(temp/k);
                    temp%=k;
                    continue;
                }
                else
                {
                    ans+=1;
                    leftover=k-temp;
                    if(leftover>0)
                        leftover--;
                    temp=0;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
