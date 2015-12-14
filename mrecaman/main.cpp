#include <iostream>

using namespace std;

int main()
{
    int a[500001];
    bool check[5000001];int b;
    for(int i=1;i<=500000;i++)
    {
        b=a[i-1];
        if(b>i&&!check[b-i])
            a[i]=b-i;
        else
            a[i]=b+i;
        check[a[i]]=1;
    }
    for(int i=0;i<50;i++)
        cout<<a[i]<<endl;

    return 0;
}
