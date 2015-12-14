#include <iostream>
#define max(a,b) (a>b)?a:b
using namespace std;
int n,W,w[501],v[501];
int main()
{
    cin>>n>>W;
    for(int i=1;i<=n;i++)
        cin>>w[i]>>v[i];
    int ans[W+1];
    ans[0] = 0;
   //items[0] = -1;
    int i,j;
    for(j=1;j<=W;j++) {
       //items[j] = items[j-1];
      // as per our recursive formula,
      // iterate over all ws w(0)...w(n-1)
      // and find max value that can be fitted in ans of w 'j'
      int ma = ans[j-1];
      for(i=0;i<n;i++) {
         int x = j-w[i];
         if(x >= 0 && (ans[x] + v[i]) > ma) {
            ma = ans[x] + v[i];
            //items[j] = i;
         }
         ans[j] = ma;
      }
   }
   cout<< ans[W]<<endl;;
    return 0;
}
