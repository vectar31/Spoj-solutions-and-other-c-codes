#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    cout<<cal(100000000);
    int a,b,c=0;
    cin>>a>>b;
    int temp1=cal(a),temp2=cal(b);
    if(temp2>temp1)
    cout<<temp2-temp1<<endl;
    else
        cout<<0<<endl;
    return 0;
}
