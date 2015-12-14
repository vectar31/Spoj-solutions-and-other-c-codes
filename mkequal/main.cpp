#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int sum=0,a;
        for(int i=0;i<n;i++)
            {scanf("%d",&a);sum+=a;}
        if(sum%n==0)
        cout<<n<<endl;
        else
            cout<<n-1<<endl;
    }
    return 0;
}
