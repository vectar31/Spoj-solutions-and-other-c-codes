#include <iostream>
#include <cmath>
using namespace std;
struct pos{
    double x;
    double y;
};
double dotproduct(pos a , pos b, pos c,pos d)//calculates dot product AB.CD
{
    pos e,f;
    e.x=b.x-a.x;
    e.y=b.y-a.y;
    f.x=d.x-c.x;
    f.y=d.y-c.y;
    double ans=(e.x*f.x)+(e.y*f.y);
    return  ans;
}
double crossproduct(pos a , pos b, pos c,pos d)//calculates cross product AB cross CD
{
    pos e,f;
    e.x=b.x-a.x;
    e.y=b.y-a.y;
    f.x=d.x-c.x;
    f.y=d.y-c.y;
    double ans = e.x*f.y - e.y * f.x ;
    return  ans;
}
double distanceab(pos a , pos b)
{
    double ans= sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
    return ans;
}

int main()
{
    pos a,b,c,d;
    cin>>a.x>>a.y;
    cin>>b.x>>b.y;
    cin>>c.x>>c.y;
    cin>>d.x>>d.y;
    return 0;
}
