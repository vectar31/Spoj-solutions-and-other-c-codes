#include <iostream>
#define ll long long
using namespace std;
int ans=0;
void solve(int index,int remaining_gifts)
{
    if(index==m)
    {
        if(remaining_gifts==0)
        {
            ans++;
            return ;
        }
    }
        for(int j=a[i] ; j<=remaining_gifts && j<=b[i] ; j++)
            solve(index,remaining_gifts - j);
}
int main()
{
    int t;
    cin>>t;
    while(t--){
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>a[i]>>b[i];
    return 0;
}
