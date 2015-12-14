#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll factorial[15];
int main()
{
    factorial[0]=factorial[1]=1;
    for(int i=2;i<15;i++)
        factorial[i]=factorial[i-1]*i;
    //string s="abcdefghijklm";
    int c=1;

    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        c=1;
        string s="abcdefghijklm";
        while (c<n && std::next_permutation(s.begin(), s.end()) )
        {
            //std::cout << s << std::endl;
            c++;
        }
        cout<<s<<endl;
    }


    return 0;
}
