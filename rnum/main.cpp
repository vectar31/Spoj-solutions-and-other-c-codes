#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ansmin=0,ansmax=0;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int b[n];
        for(int i=0;i<n;i++)
            b[i]=0;
        for(int i=0;i<n-2;)
        {
            if(((a[i+1]-a[i])==(a[i+2]-a[i+1]))&&((a[i+2]-a[i+1])==1))
            {
                b[i]=b[i+1]=b[i+2]=3;
                i+=3;
            }
            else if(a[i+1]-a[i]==1)
            {
                b[i]=b[i+1]=2;
                i+=2;
            }
            else
            {
                b[i]=1;
                i+=1;
            }

        }


        //cout<<b[n-2]<<" "<<b[n-1]<<endl;
        if(b[n-2]==0&&a[n-1]-a[n-2]==1)
        {
            b[n-2]=b[n-1]=2;
        }
        else
            b[n-2]=1;
        //cout<<b[n-2]<<" "<<b[n-1]<<endl;
        if(b[n-1]==0)
            b[n-1]=1;
        //cout<<b[n-2]<<" "<<b[n-1]<<endl;
        /*for(int i=0;i<n;i++)
            cout<<b[i]<<" ";
        cout<<endl;*/
        int b1=0,b2=0,b3=0;
        for(int i=0;i<n;i++)
        {
            if(b[i]==1)
                b1+=1;
            if(b[i]==2)
                b2+=1;
            if(b[i]==3)
                b3+=1;
        }
        int i;
        for(i=0;i<n-1;)
        {
            if(b[i]==3&&(b[i+1]==3||(a[i+1]-a[i]==1)))
                {
                    //cout<<i<<endl;
                    ansmax+=1;
                    i+=2;
                }
            else if(b[i]==3)
            {
                ansmax+=1;
                i+=1;
            }
            else if(b[i]==2&&b[i+1]==2)
            {
                ansmax+=1;
                i+=2;
            }
            else
            {
                ansmax+=1;
                i+=1;
            }
        }
        if(i==n-1)
            ansmax+=1;
        //cout<<b1<<endl;
        ansmin=b1+(b2/2)+(b3/3);
        cout<<ansmin<<" "<<ansmax<<endl;

    }
    return 0;
}
