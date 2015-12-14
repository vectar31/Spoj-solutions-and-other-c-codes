#include<iostream>
#define N 100001
using namespace std;

int main()
{
    int a[N];
    for(int i=0;i<N;i++)
        a[i]=0;
    int n,i,f=0,t;

    cin>>n;
    for(i=1; i<=n;i++)
    {
        cin>>t;
        a[t]++;
    }
    for(i=n-1;  i>=0;   i--)
        if(a[i])
            f++;

    if(a[n-1] == n)
        cout<<n<<endl;

    else if(a[0] == n)
        cout<<n<<endl;

    else if(f!=2)
        cout<<-1<<endl;

    else
    {
        for(i=n-1;  i>=0;   i--)
            if(a[i])
                break;

        if(a[i-1] && a[i]+i == n &&  a[i-1] == i)
            cout<<a[i-1]<<endl;
        else
            cout<<-1<<endl;
    }

    return 0;
}
