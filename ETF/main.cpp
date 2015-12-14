#include <iostream>

using namespace std;
int etfs(int n)
{
     int result = n;
     int i;
       for(i=2;i*i <= n;i++)
       {
         if (n % i == 0)
         result -= result / i;
         while (n % i == 0)
         n /= i;
       }
       if (n > 1)
       result -= result / n;
       return result;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        a[i]=etfs(a[i]);
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
    return 0;
}
