#include <iostream>

using namespace std;
bool pyth(int a, int b ,int c)
{
   return ((a*a+b*b)==c*c);
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    while(a!=0)
    {
        if(pyth(a,b,c)||pyth(a,c,b)||pyth(b,c,a))
        {
            cout<<"right"<<endl;

        }
        else
            cout<<"wrong"<<endl;
    cin>>a>>b>>c;
    }
    return 0;
}
