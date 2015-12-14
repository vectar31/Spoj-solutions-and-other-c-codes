#include <bits/stdc++.h>
using namespace std;
#define PI acos(0.0)
#define G 9.806
int main()
{
    int i, ta, sp, tN;
    cin>>tN;
    vector<int> tas, sps;
    for(i=0;i<tN;i++)
    {
        cin>>ta;
        tas.push_back(ta);
        cin>>sp;
        sps.push_back(sp);
    }
    for(i=0;i<tN;i++)
    {
        float R = float(tas[i])*G/sps[i]/sps[i];
        //printf("R = %.2f\n",R);
        if(R>1)
        {
            printf("Scenario #%d: -1\n",i+1);
        }
        else
        {
            float arc = asin(R)*180/2/(PI);
            printf("Scenario #%d: %.2f\n",i+1, arc);
        }
    }
    return 0;
}
