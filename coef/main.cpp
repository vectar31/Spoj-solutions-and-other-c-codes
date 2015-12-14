#include <iostream>

using namespace std;
int factorial(int n)
{
    if(n==0||n==1)
        return 1;
    return n*factorial(n-1);
}
int main()
{
    int n,k;
    while(cin>>n>>k)
    {
        int de=1;
        for(int i=0;i<k;i++)
        {
            int a;
            cin>>a;
            de*=factorial(a);
        }
        int ne = factorial(n);
        int ans = ne/de;
        cout<<ans<<endl;
    }
    return 0;
}
