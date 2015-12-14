#include <iostream>
#include <cstdio>
#include <cmath>
#define in unsigned long long
using namespace std;

int main () {
    in t, x, y, s, a, r, n, i, p, term;
    cin >> t;
    while (t--) {
        cin >> x >> y >> s;
        i = 0;
        if (x == y) {
            r = 1;
            n = (in)(s/x);
            cout << n << endl;
            while (i < n-1) {
                cout << x << " ";
                i++;
            }
            cout << x << endl;
        }

        else {
            if (s == 0) {
                s--;
            }
            p = (in)(s/y);
            r = (in)((-1+sqrt(1-4*(1-p)))/2.0);
            a = x/(r*r);
            n = (in)(log (y/a)/log (r))+3;
            if (a*pow (r, n-2) == y) {
                n++;
            }
            cout << n << endl;
            term = 1;
            while (i < n-1) {
                cout << a*term << " ";
                term = term*r;
                i++;
            }
            cout << a*term << endl;
        }
    }
    return 0;
}
