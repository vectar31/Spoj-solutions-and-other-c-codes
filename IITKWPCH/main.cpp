#include <iostream>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[10]={0};
        int b[10]={0};
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            for(unsigned int i=0;i<s.length();i++)
                {
                    if(b[s[i]-'0']==0)
                        b[s[i]-'0']=1;
                }
            for(int i=0;i<10;i++)
            {
                if(b[i]==1)
                    a[i]+=1;
                b[i]=0;
            }

        }
        long long ans=0;
        for(int i=0;i<10;i++)
        {
            if(a[i]>1)
                ans+=(a[i]*(a[i]-1)/2);
        }
        cout<<ans<<endl;
    }

    return 0;
}
