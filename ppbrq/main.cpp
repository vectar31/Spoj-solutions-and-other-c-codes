#include <bits/stdc++.h>

using namespace std;
struct cube
{
    int F, U, D, L, R, B;
};
cube c;
void rotX()
{
    swap(c.D, c.B);
    swap(c.B, c.U);
    swap(c.U, c.F);
}
void rotY()
{
    swap(c.D, c.R);
    swap(c.R, c.U);
    swap(c.U, c.L);
}
void rotZ()
{
    swap(c.B, c.R);
    swap(c.R, c.F);
    swap(c.F, c.L);
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        c.F = 0; c.U = 1; c.D = 2; c.L = 3; c.R = 4; c.B = 5;
        char s[6][1024];
        for (int i = 0; i < 6; ++i)
            cin>>s[i];
        int q;
            cin>>q;
        for (int i = 0; i < q; ++i)
        {
            char t[1024];
            int k;
            cin>>t>>k;
            k %= 4;
            if (t[0] == 'X')
            {
                while (k--)
                    rotX();
            }
            else if (t[0] == 'Y')
            {
                while (k--)
                    rotY();
            }
            else
            {
                while (k--)
                    rotZ();
            }
        }
        cout<<s[c.F]<<" "<<s[c.U]<<" "<<s[c.D]<<" "<<s[c.L]<<" "<<s[c.R]<<" "<<s[c.B]<<endl;
    }
}
