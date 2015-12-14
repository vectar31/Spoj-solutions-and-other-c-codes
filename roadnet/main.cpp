#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            cin>>a[i][j];
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                bool f=1;
                for(int  k=0;k<n;k++)
                {
                    if(a[i][k]+a[k][j]==a[i][j] && k!=i && k!=j)
                    {
                        f=0;
                        break;
                    }

                }
                if(f && i!=j)
                    cout<<i+1<<" "<<j+1<<endl;
            }
        }
        /*for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }*/
    }
    return 0;
}
