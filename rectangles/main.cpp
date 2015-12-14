#include <iostream>
#include <cmath>
using namespace std;
long long int fib(long long int n)
{
  /* Declare an array to store fibonacci numbers. */
  long long int f[n+1];
  long long int i;

  /* 0th and 1st number of the series are 0 and 1*/
  f[0] = 0;
  f[1] = 1;

  for (i = 2; i <= n; i++)
  {
      /* Add the previous 2 numbers in the series
         and store it */
      f[i] = f[i-1] + f[i-2];
  }

  return f[n];
}
int main()
{
    long long int t;
    cin>>t;
    cout<<fib(t)<<endl;
    return 0;
}
