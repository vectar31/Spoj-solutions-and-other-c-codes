#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        int c = 0;
        for (int i = 0; i < s.length(); i++)
            c += !!isupper(s[i]) ^ (i%2);
        cout << min(c, (int)s.length() - c) << endl;
    }
    return 0;
}
