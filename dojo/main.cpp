#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        string m,j;
        scanf("%d",&n);
        cin>>m;
        scanf("%d",&i);
        cin>>j;
        int l1=m.length();
        int l2=j.length();
        int x=m[l1-1]-'0';
        int y=j[l2-1]-'0';
        if((n&1 && x&1) && !((i+y)&1))
            printf("Possible.\n");
        else
            printf("Impossible.\n");
    }
    return 0;
}
