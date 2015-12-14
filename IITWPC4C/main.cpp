#include <iostream>

using namespace std;
struct vec{
    int x,y;
};
int mod (vec a)
{
    return (a.x*a.x + a.y*a.y);
}
bool checktri(vec a, vec b, vec c)
{
    bool ans=0;
    if(a.x+b.x==c.x && a.y+b.y==c.y && (mod(a) + mod (b) > mod (c) ) )
        ans=1;
    else if(a.x+c.x==b.x && a.y+c.y==b.y && (mod(a) + mod (c) > mod (b) ) )
        ans=1;
    else if(b.x+c.x==a.x && b.y+c.y==a.y && (mod(c) + mod (b) > mod (a) ) )
        ans=1;
    else
        return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vec a[n];
        for(int i=0;i<n;i++)
            cin>>a[i].x>>a[i].y;
        if(n<3)
            cout<<"NO"<<endl;
        else
        {
            bool f=0;
            for(int i=0;i<n-2;i++)
            {
                for(int j=i+1;j<n-1;j++)
                {
                    for(int k=j+1;k<n;k++)
                    {
                        if(checktri(a[i],a[j],a[k]))
                        {
                            cout<<"YES"<<endl;
                            f=1;
                            break;
                        }
                    }
                }
            }
            if(f)
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
