#include <iostream>
#define in long long int
using namespace std;
//dp algorithm which takes linear time
in f[1001];
int main()
{
    f[0]=0;f[1]=1;
    int n;
    cin>>n;
    for(int i=2;i<=n;i++)
        f[i]=f[i-1]+f[i-2];

    cout<<f[n]<<endl;
}
//fibonacci using caching tht is storing already calculated value for future use
/*int f[1001];
int cachefib(int n)
{
    if(f[n]==-1)
        return(cachefib(n-1)+cachefib(n-2));
    return f[n];
}
int main()
{
        int n;
        cin>>n;
        f[0]=0;f[1]=1;
        for(int i=2;i<n;i++)
            f[i]=-1;//assigning value -1
        for(int i=0;i<n;i++)
            cout<<cachefib(i)<<endl;
        return 0;
}*/
//recursive fibonacci
/*int recurfib(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return(recurfib(n-1)+recurfib(n-2));
}

int main()
{
    for(int i=0;i<10;i++)
    cout<<recurfib(i)<<endl;;
    return 0;
}*/
