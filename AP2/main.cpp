#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long s[n][3];
    for(int i=0;i<n;i++)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        s[i][0]=a;
        s[i][1]=b;
        s[i][2]=c;
    }
    for(int i=0;i<n;i++)
    {
        long long a,b,c,d,f,t;
        a=s[i][0];
        b=s[i][1];
        c=s[i][2];
        if(a==b)
        {
            d=0;
            f=a;
            t=c/a;
        }
        else{
        d=(b*b-a*a)/(2*c-5*a-5*b);
        f=a-2*d;
        t=((b-a)/d)+5;}
        cout<<t<<endl;
        cout<<f;
        for(int j=1;j<t;j++)
            cout<<" "<<(f+j*d);
        cout<<endl;
    }
}
