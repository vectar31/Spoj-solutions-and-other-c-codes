#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <iostream>
#include <algorithm>
#define in long long
#define loop for(int i=0;i<n;i++)
using namespace std;
bool a[1001];
int main()
{
    for(int i=0;i<1001;i++)
        a[i]=0;
    for(int i=1;i<=1000;i++)
    {
        for(int j=1;j<=(1000)/i;j++)
        {

            if(i*j<=1000)
            {
                if(a[i*j]==0)
                    a[i*j]=1;
                else
                    a[i*j]=0;
            }
        }
    }int c=0;
    for(int i=1;i<=1000;i++)
        if(a[i]==1)
            c++;
    cout<<c<<endl;
    return 0;
}
