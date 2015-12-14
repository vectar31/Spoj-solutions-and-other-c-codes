#include <bits/stdc++.h>
#define N 300

using namespace std;
int pages[N];
int cumsum[N]={0};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,k;
        cin>>m>>k;
        for(int i=0;i<m;i++)
        {
            cin>>pages[i];
            cumsum[i]=(i==0)?pages[0]:cumsum[i-1]+pages[i];
        }
    }
    return 0;
}
