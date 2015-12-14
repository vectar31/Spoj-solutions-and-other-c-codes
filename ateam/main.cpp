#include <iostream>

using namespace std;
double dist (double x,double y)
{
    return x*x+y*y;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double x,y,x1,x2,y1,y2,xc,yc;
        cin>>x1>>y1>>x2>>y2>>xc>>yc;
        x=(x1+x2)/2.0;
        y=(y1+y2)/2.0;
        double s1,s2,sc1,sc2;
        s1=y1*x-x1*y;
        s2=y2*x-x2*y;
        sc1=y1*xc-x1*yc;
        sc2=y2*xc-x2*yc;
        if(y1*x2==x1*y2)
        {
            if(y1*xc==x1*yc)
            {
                if(dist(x1,y1)>dist(x2,y2)&&dist(xc,yc)>dist(x2,y2))
                cout<<"NO"<<endl;
                else if(dist(x1,y1)<dist(x2,y2)&&dist(xc,yc)>dist(x1,y1))
                    cout<<"NO"<<endl;
                else
                    cout<<"YES"<<endl;

            }
            else
                cout<<"YES"<<endl;
        }
        else if(((s1>0.0&&sc1>0.0) || (s1<0.0 && sc1<0.0))&& ((s2>0.0&&sc2>0.0) || (s2<0.0 && sc2<0.0))  )
        {
            double t1= ( y1 * x2 ) - ( x1*y2 );
            double t2 =  ((y2-y1)*(xc-x1)) - ( (x2-x1) * (yc-y1) );
            if((t2>0&&t1>0)||(t1<0&&t2<0))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;

        }
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
