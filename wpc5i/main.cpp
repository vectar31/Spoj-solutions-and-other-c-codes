#include <bits/stdc++.h>
#define ll long long
#define print(c,n) cout<<" check #"<<c<<" : "<<n<<endl
using namespace std;
int c=0;
int gcd(ll a,ll b)
{
    if(a==0)return b;
    return gcd(b%a,a);
}
int lcm(ll a , ll b)
{
    return a*b/gcd(a,b);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&m,&n);
        int temp_m=m,temp_n=n;
        map <int, int> m1;
        map <int, int>m2;
        for(int i=2;i*i<=temp_m;i++)
        {
            if(temp_m%i==0)
            {
                m1[i]=0;
                while(temp_m%i==0)
                {
                    m1[i]++;
                    temp_m/=i;
                }
            }
        }
        for(int i=2;i*i<=temp_n;i++)
        {
            if(temp_n%i==0)
            {
                m2[i]=0;
                while(temp_n%i==0)
                {
                    m2[i]++;
                    temp_n/=i;
                }
            }
        }
        if(temp_m>1)m1[temp_m]++;
        if(temp_n>1)m2[temp_n]++;
        ll ans=1;
        map<int,int> fi;
        map<int ,int>::iterator it;
        for(it=m2.begin();it!=m2.end();it++)
            if(it->second > m1[it->first])
                fi[it->first]=it->second;
        for(it=m1.begin();it!=m1.end();it++)
            if(it->second > m2[it->first])
                if(it->second >= fi[it->first])
                    fi[it->first]=it->second;
        for(it=fi.begin();it!=fi.end();it++)
            for(int i=0;i<it->second;i++)
                ans=ans*1LL*(it->first);
        cout<<ans<<endl;
    }
    return 0;
}
