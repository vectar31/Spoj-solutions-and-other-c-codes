#include <cstdio>
#include <iostream>
#define ll long long
using namespace std;
int main() {
    char op;
    ll n, a, ans;
    cin>>n;
    while ( n-- )
    {
        op = 0;
        cin>>ans;
        while (1)
        {
            cin>>op;
            if (op=='=')
                break;
            cin>>a;
            switch (op)
            {
                case '+':
                    ans += a;
                    break;
                case '-':
                    ans -= a;
                    break;
                case '*':
                    ans *= a;
                    break;
                case '/':
                    ans /= a;
                    break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
