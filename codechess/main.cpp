#include <bits/stdc++.h>
#define N 100000

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<(1-(n%2))<<endl;
    }
    return 0;
}
