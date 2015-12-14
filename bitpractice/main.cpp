#include <iostream>

using namespace std;

int main()
{
    int n,e=0,o=0;
    cin>>n;
    if(n==0)
        cout<<"divisible by 3";
    while(n)
    {
        /* If odd bit is set then
           increment odd counter */
        if(n & 1)
           o++;
        n = n>>1;

        /* If even bit is set then
           increment even counter */
        if(n & 1)
            e++;
        n = n>>1;
    }
    if((o-e)%3==0)
        cout<<"It is divisible by 3";
    else
        cout<<"Its  not divisible by 3";
    return 0;
}
