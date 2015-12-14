#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    int n;
    fin>>n;
    int ans=0,anssum=1;
    int a=0,b=1;
    for(int i=2;i<=n;i++)
    {
        ans=a+b;
        a=b;
        b=ans;
        anssum+=ans;
    }
    fout<<ans<<" "<<anssum<<endl;
    return 0;
}
