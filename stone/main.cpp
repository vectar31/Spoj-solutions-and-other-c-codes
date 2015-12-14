#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        double  x[n],y[n];
        for(int i=0;i<n;i++)
            cin>>x[i]>>y[i];
        double a=0,cx=0,cy=0;
        for(int i=0;i<n;i++)
            a+=(x[i]*y[(i+1)%n]-x[(i+1)%n]*y[i]);
        a*=0.5;
        for(int i=0;i<n;i++)
            cx+=(x[i]+x[(i+1)%n])*(x[i]*y[(i+1)%n]-x[(i+1)%n]*y[i]);
        for(int i=0;i<n;i++)
            cy+=(y[i]+y[(i+1)%n])*(x[i]*y[(i+1)%n]-x[(i+1)%n]*y[i]);
        cx=cx/(6.0*a);
        cy=cy/(6.0*a);
        cout<<fixed<<setprecision(2)<<cx<<" "<<cy<<endl;

    }
    return 0;
}
