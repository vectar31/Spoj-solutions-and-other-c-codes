#include <bits/stdc++.h>

using namespace std;
const double epsilon = 0.00001;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        double a,b,x,y;
        scanf("%lf%lf%lf%lf",&a,&b,&x,&y);
        if(min(a,b)>min(x,y) && max(a,b)>max(x,y))
            printf("Escape is possible.\n");
        else
        {
            if(x<y)swap(x,y);
            if(a<b)swap(a,b);
            double c= (x*y*a*2.0+(x*x-y*y)*sqrt(x*x+y*y-a*a))/(x*x+y*y);
            if(b>c)
                printf("Escape is possible.\n");
            else
                printf("Box cannot be dropped.\n");
        }
    }
    return 0;
}
