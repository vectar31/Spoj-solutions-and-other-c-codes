#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    int x,n;
    fin>>x>>n;
    int i,j,s=-1;
    double t=x,sum=0;
    for(i=1;i<=n;i++)
    {
        sum+=t;
        t=t*t*s/i;
    }
    fout<<sum<<endl;
    return 0;
}
