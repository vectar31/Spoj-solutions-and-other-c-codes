#include <bits/stdc++.h>

using namespace std;
int countdig(int n)
{
    double phi=(1+sqrt(5.0))/2.0;
    double l5=log(5.0);
    double l10=log(10.0);
    double lphi=log(phi);
    double res=(((n*lphi)-(l5/2.0))/l10)+1;
    int ans=(int)ceil(res);
    return ans;
}
int main()
{
    for(int i=1;i<=20;i++)
        cout<<countdig(i)<<endl;
    return 0;
}
