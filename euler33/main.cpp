#include <bits/stdc++.h>


using namespace std;

int main()
{
    int n,d,a,b;
    cin>>n>>d;
    if(n==2)
    {
        a=10;
        b=99;
    }
    if(n==3)
    {
        a=100;
        b=999;
    }
    if(n==4)
    {
        a=1000;
        b=9999;
    }
    int ansnum=0,ansden=0;
    for(int i=a;i<=b;i++)
    {
        for(int j=i+1;j<=b;j++)
        {
            bool f=1;
            int num=i,den=j,tempnum=i,tempden=j;
            {
                for(int k=1;k<=d;k++)
                {
                    if(num%10==0 && den%10==0)
                    {
                        f=0;
                        break;
                    }
                    tempnum/=10;tempden/=10;
                    if(num*tempden!=tempnum*den)
                    {
                        f=0;
                        break;
                    }
                }
            }
            if(f)
            {
                cout<<i<<" "<<j<<endl;
                ansnum+=i;
                ansden+=j;
            }
        }
    }
    cout<<ansnum<<" "<<ansden<<endl;
    return 0;
}
