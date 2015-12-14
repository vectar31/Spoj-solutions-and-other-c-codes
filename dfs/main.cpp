#include <iostream>
#include <cmath>
#include <algorithm>
#include <ctime>
#include <vector>
#include <list>
#include <queue>
using namespace std;
vector < list <int > > a (6);
bool visited[6];
int arrive[6];
int departed [6];
int t=0;
void DFS(int v)
{
    visited[v]=1;
    cout<<v<<" "<<endl;
    arrive[v]=t++;
    list<int>::iterator iter;
    for(iter=a[v].begin();iter!=a[v].end();iter++)
    {
        if(!visited[*iter])
            DFS(*iter);
    }
    departed[v]=t++;
}
int main()
{
    for(int i=0;i<10;i++)
    {
        int b1,b2;
        cin>>b1>>b2;
        a[b1].push_back(b2);
        a[b2].push_back(b1);
    }
    for(int i=0;i<6;i++)
        visited[i]=0;
    DFS(0);
    /*for(int i=0;i<6;i++)
    {
        cout<<arrive[i]<<" "<<departed[i]<<endl;
    }*/
    return 0;
}
