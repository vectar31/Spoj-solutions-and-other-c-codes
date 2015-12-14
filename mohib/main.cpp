#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,x;
        scanf("%d%d" , &x , &a);
        printf("%d\n",(a+x+3)*(a-x)/2);
    }
    return 0;
}
