#include <iostream>
using namespace std;
int mul(int x,int y)
{
    if(y==0)
        return 0;
    if(y==1)
        return x;
    return (x+mul(x,y-1));
}
int main()
{

    int x,y;
    cin>>x>>y;
    cout<<mul(x,y);
    return 0;

}

