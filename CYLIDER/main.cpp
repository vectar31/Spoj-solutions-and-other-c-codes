#include <iostream>

using namespace std;

int main()
{
    double h,w;
    cin>>h>>w;
    while(h!=0&&w!=0)
    {
        double r,R,h1,v,V;
        double p=3.141592653589;
        r=h/(2*p);
        h1=w-2*r;
        if((w/(2*p+1))<h/2)
            R=(w/(2*p+1));
        else
            R=h/2;
        v=p*r*r*h1;
        V=p*R*R*h;
        if(v>V)
            cout<<v<<endl;
        else
            cout<<V<<endl;
        cin>>h>>w;
    }
    return 0;
}
