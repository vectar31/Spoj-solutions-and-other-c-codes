#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    int a1,b1,c1,a2,b2,c2;
    fin>>a1>>b1>>c1>>a2>>b2>>c2;
    int x=(b1*c2-b2*c1)/(a1*b2-a2*b1);
    int y=(a1*c2-a2*c1)/(b1*a2-b2*a1);
    fout<<x<<" "<<y<<endl;
    return 0;
}
