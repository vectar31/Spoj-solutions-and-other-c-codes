#include <iostream>
#include <string>
#define ll long long
#define min(a,b) a<b?a:b
using namespace std;
int max(int x, int y)
{ return (y > x)? y : x; }

int maxSubArraySum(int a[], int size)
{
   int max_so_far = a[0], i;
   int curr_max = a[0];

   for (i = 1; i < size; i++)
   {
        curr_max = max(a[i], curr_max+a[i]);
        max_so_far = max(max_so_far, curr_max);
   }
   return max_so_far;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int ans=maxSubArraySum(a,n);
    if(ans>0)
        cout<<ans<<endl;
    else
        cout<<0<<endl;
    return 0;
}
