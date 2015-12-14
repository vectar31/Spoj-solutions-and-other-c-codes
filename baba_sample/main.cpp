#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream ining("in.txt");
    ofstream out("out.txt");
    vector <int> v;
    int m,n;
    while(ining>>m>>n)
    {
        v.push_back(m);
        v.push_back(n);
    }
    for(int i=0;i<v.size()/2;i++)
        out<<v[i]+v[i+1]<<endl;
    return 0;
}
