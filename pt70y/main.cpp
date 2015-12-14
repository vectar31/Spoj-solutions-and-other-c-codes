#include <iostream>
#include <cmath>
#include <algorithm>
#include <ctime>
#include <vector>
#include <list>
#include <queue>
using namespace std;
vector < list <int > > a (10001);
bool visited[6];
int N;
//int arrive[6];
//int departed [6];
//int t=0;
bool connected()
{
    for(int i=0;i<N;i++)
    {
        if(visited[i]==0)
            return false;
    }
    return true;
}
void DFS(int v)
{
    visited[v]=1;
    //cout<<v<<" "<<endl;
    //arrive[v]=t++;
    list<int>::iterator iter;
    for(iter=a[v].begin();iter!=a[v].end();iter++)
    {
        if(!visited[*iter])
            DFS(*iter);
    }
    //departed[v]=t++;
}
int main()
{
    int n,m;
    cin>>n>>m;
    N=n;
    if(m!=n-1)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0;i<m;i++)
    {
        int b1,b2;
        cin>>b1>>b2;
        a[b1-1].push_back(b2-1);
        a[b2-1].push_back(b1-1);
    }
    for(int i=0;i<n;i++)
        visited[i]=0;
    DFS(0);
    if(connected())
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    /*for(int i=0;i<6;i++)
    {
        cout<<arrive[i]<<" "<<departed[i]<<endl;
    }*/
    return 0;
}
