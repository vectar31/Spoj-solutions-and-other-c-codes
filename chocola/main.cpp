#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int m,n;
    cin>>m>>n;
    int x[m-1],y[n-1];
    for(int i=0;i<m-1;i++)
        cin>>x[i];
    for(int i=0;i<n-1;i++)
        cin>>y[i];
    sort(x,x+m-1);
    sort(y,y+n-1);
    int i=m-2,j=n-2,vertical=1,horizontal=1,ans=0;
    while(i>=0&&j>=0)
    {
        if(x[i]>y[j])
        {
            ans += x[i]*vertical;
            i--;horizontal++;
        }
        else
        {
            ans += y[j]*horizontal;
            j--;vertical++;
        }


    }
    if(i>=0)
        {
            int sum = 0;
            while(i>=0){
                sum += x[i];
                i--;
            }
            ans += sum*vertical;
        }
        else
        {
            int sum = 0;
            while(j>=0){
                sum += y[j];
                j--;
            }
            ans += sum*horizontal;
        }
        cout<<ans<<endl;}

    return 0;
}
