#include <iostream>
#include <cmath>
#include <algorithm>
#include <ctime>
#include <vector>
#include <list>
#include <queue>
using namespace std;
int prime[10000];
bool checkdigdif(int a, int b)
{
    int c=0;
    while(a!=0)
    {
        if(a%10!=b%10)
            c++;
        a/=10;
        b/=10;
    }
    return c==1;
}
int main()
{
    //cout<<checkdigdif(1112,1234);
    for(int i=0;i<=9999;i++)
        prime[i]=1;
    prime[0]=prime[1]=0;
    for(int i=2;i*1<=9999;i++)
    {
        if(prime[i]==1)
        {
            for(int j=2;i*j<=9999;j++)
                prime[i*j]=0;
        }
    }
    int t;
    cin>>t;
    while(t--)
    {
        vector < list<int> > a(10000);
        int m,n;
        cin>>m>>n;
        if(m==n)
            cout<<0<<endl;
        else{
        for(int i=1000;i<=9999;i++)
        {
            //cout<<i<<endl;
            if(prime[i])
            {
                //cout<<i<<endl;
                for(int j=i+1;j<=9999;j++)
                {
                    //cout<<j<<endl;
                    if(prime[j])
                    {
                        if(checkdigdif(i,j))
                        {
                            //cout<<i<<" "<<j<<endl;
                            a[i].push_back(j);
                            a[j].push_back(i);
                        }
                    }
                }
            }
        }
       // cout<<"kaka";
       // vector <list<int> >::iterator it;
        bool visited[10000];
        int d[10000];
        for(int i=0;i<=9999;i++)
            {
                visited[i]=0;
                d[i]=10000;
            }
        queue <int> q;
        q.push(m);
        d[m]=0;int f=0;
        //cout<<m;
        while(!q.empty())
        {
            int t=q.front();//cout<<t<<endl;
            q.pop();
            list <int>::iterator it;
            for(it=a[t].begin();it!=a[t].end();it++)
            {
                if(!visited[*it])
                {
                    q.push(*it);
                    visited[*it]=1;
                    d[*it]=d[t]+1;
                }
                if(*it==n)
                {
                        f=1;
                        break;
                }
            }
            if(f)
                break;
        }
        if(d[n]==10000)
            cout<<"Impossible"<<endl;
        else
            cout<<d[n]<<endl;}

    }
    return 0;
}
